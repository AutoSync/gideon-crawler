from __future__ import annotations

import json
from dataclasses import dataclass
from typing import Any

from .parser import parse_source
from .schema import EslonCodeSchema


@dataclass(frozen=True)
class PinRef:
    node: str
    pin: str
    type: str = "wildcard"


class FunctionCompiler:
    def __init__(self, function: dict[str, Any], variables: list[dict[str, Any]]):
        self.function = function
        self.variables = {variable["name"]: variable.get("type", "wildcard") for variable in variables}
        self.symbols = dict(self.variables)
        self.symbols.update({pin["name"]: pin.get("type", "wildcard") for pin in function.get("inputs", [])})
        self.nodes: list[dict[str, Any]] = []
        self.edges: list[dict[str, Any]] = []
        self.counter = 0
        self.cursor_x = 0
        self.base_y = 0
        self.loop_symbols: dict[str, tuple[PinRef, PinRef]] = {}

    def compile(self) -> dict[str, Any]:
        entry = self._node(
            "function_entry",
            self.function["name"],
            0,
            0,
            outputs=[{"name": "then", "type": "exec"}, *self.function.get("inputs", [])],
        )
        self.cursor_x = 360
        continuations = [PinRef(entry["id"], "then", "exec")]
        continuations = self._compile_block(self.function.get("body", []), continuations, 0)
        if continuations:
            result = self._result_node([], self.cursor_x, self.base_y + 220)
            for continuation in continuations:
                self._edge(continuation, PinRef(result["id"], "exec", "exec"), "exec")

        return {
            "name": self.function["name"],
            "inputs": self.function.get("inputs", []),
            "outputs": self._outputs(),
            "nodes": self.nodes,
            "edges": self.edges,
        }

    def _outputs(self) -> list[dict[str, Any]]:
        outputs = self.function.get("outputs", [])
        if outputs:
            return outputs
        return [{"name": "ReturnValue", "type": "wildcard"}]

    def _compile_block(self, statements: list[dict[str, Any]], continuations: list[PinRef], y_offset: int) -> list[PinRef]:
        active = continuations
        for statement in statements:
            if not active:
                break
            active = self._compile_statement(statement, active, y_offset)
        return active

    def _compile_statement(self, statement: dict[str, Any], continuations: list[PinRef], y_offset: int) -> list[PinRef]:
        kind = statement.get("kind")
        if kind == "if":
            condition = self._compile_expr(statement["test"], self.cursor_x, y_offset + 140)
            branch = self._node(
                "branch",
                "Branch",
                self.cursor_x,
                y_offset,
                inputs=[{"name": "exec", "type": "exec"}, {"name": "condition", "type": "bool"}],
                outputs=[{"name": "true", "type": "exec"}, {"name": "false", "type": "exec"}],
            )
            for continuation in continuations:
                self._edge(continuation, PinRef(branch["id"], "exec", "exec"), "exec")
            self._edge(condition, PinRef(branch["id"], "condition", "bool"), "data")

            saved_x = self.cursor_x
            self.cursor_x += 360
            true_continuations = self._compile_block(statement.get("body", []), [PinRef(branch["id"], "true", "exec")], y_offset)
            true_end_x = self.cursor_x

            self.cursor_x = saved_x + 360
            false_start = [PinRef(branch["id"], "false", "exec")]
            false_continuations = self._compile_block(statement.get("else", []), false_start, y_offset + 260)
            false_end_x = self.cursor_x
            self.cursor_x = max(true_end_x, false_end_x, saved_x + 720)
            return true_continuations + false_continuations

        if kind == "for_each":
            target = statement.get("target", {})
            target_name = target.get("id", "Element")
            array_ref = self._compile_expr(statement["iter"], self.cursor_x, y_offset + 140)
            node = self._node(
                "for_each",
                f"For Each {target_name}",
                self.cursor_x,
                y_offset,
                inputs=[{"name": "exec", "type": "exec"}, {"name": "array", "type": array_ref.type}],
                outputs=[
                    {"name": "loop_body", "type": "exec"},
                    {"name": "completed", "type": "exec"},
                    {"name": "array_element", "type": self._array_inner_type(array_ref.type)},
                    {"name": "array_index", "type": "int32"},
                ],
            )
            for continuation in continuations:
                self._edge(continuation, PinRef(node["id"], "exec", "exec"), "exec")
            self._edge(array_ref, PinRef(node["id"], "array", array_ref.type), "data")

            self.loop_symbols[target_name] = (PinRef(node["id"], "array_element", self._array_inner_type(array_ref.type)), PinRef(node["id"], "array_index", "int32"))
            self.symbols[target_name] = self._array_inner_type(array_ref.type)
            self.cursor_x += 360
            self._compile_block(statement.get("body", []), [PinRef(node["id"], "loop_body", "exec")], y_offset)
            return [PinRef(node["id"], "completed", "exec")]

        if kind == "return":
            values = statement.get("values", [])
            result = self._result_node(values, self.cursor_x, y_offset)
            for continuation in continuations:
                self._edge(continuation, PinRef(result["id"], "exec", "exec"), "exec")
            for index, value in enumerate(values):
                output = self._outputs()[index] if index < len(self._outputs()) else {"name": f"ReturnValue{index}", "type": "wildcard"}
                value_ref = self._compile_expr(value, self.cursor_x - 220, y_offset + 120 + index * 90)
                self._edge(value_ref, PinRef(result["id"], output["name"], output.get("type", "wildcard")), "data")
            self.cursor_x += 360
            return []

        if kind == "assign":
            targets = statement.get("targets", [])
            if targets and targets[0].get("kind") == "name" and targets[0].get("id") == "Return":
                return self._compile_statement({"kind": "return", "values": [statement["value"]]}, continuations, y_offset)
            value_ref = self._compile_expr(statement.get("value", {}), self.cursor_x, y_offset + 120)
            label = f"Set {targets[0].get('id', 'Value')}" if targets else "Set"
            node = self._node(
                "set_variable",
                label,
                self.cursor_x,
                y_offset,
                inputs=[{"name": "exec", "type": "exec"}, {"name": "value", "type": value_ref.type}],
                outputs=[{"name": "then", "type": "exec"}],
            )
            for continuation in continuations:
                self._edge(continuation, PinRef(node["id"], "exec", "exec"), "exec")
            self._edge(value_ref, PinRef(node["id"], "value", value_ref.type), "data")
            self.cursor_x += 360
            return [PinRef(node["id"], "then", "exec")]

        if kind == "expr":
            value = statement.get("value", {})
            if value.get("kind") == "call":
                call_ref = self._compile_call(value, self.cursor_x, y_offset, impure=True)
                for continuation in continuations:
                    self._edge(continuation, PinRef(call_ref.node, "exec", "exec"), "exec")
                self.cursor_x += 360
                return [PinRef(call_ref.node, "then", "exec")]

        node = self._node("comment", f"Unsupported statement: {kind}", self.cursor_x, y_offset)
        for continuation in continuations:
            self._edge(continuation, PinRef(node["id"], "exec", "exec"), "exec")
        self.cursor_x += 360
        return [PinRef(node["id"], "then", "exec")]

    def _compile_expr(self, expr: dict[str, Any], x: int, y: int) -> PinRef:
        kind = expr.get("kind")
        if kind == "literal":
            value = expr.get("value")
            value_type = self._literal_type(value)
            node = self._node(
                "literal",
                repr(value),
                x,
                y,
                outputs=[{"name": "value", "type": value_type}],
                meta={"value": value, "literal_type": value_type},
            )
            return PinRef(node["id"], "value", value_type)

        if kind == "name":
            name = expr.get("id", "")
            if name in self.loop_symbols:
                return self.loop_symbols[name][0]
            node = self._node(
                "get_variable",
                name,
                x,
                y,
                outputs=[{"name": "value", "type": self.symbols.get(name, "wildcard")}],
                meta={"name": name},
            )
            return PinRef(node["id"], "value", self.symbols.get(name, "wildcard"))

        if kind == "attribute":
            value = expr.get("value", {})
            attr = expr.get("attr", "")
            if value.get("kind") == "name" and attr == "Index" and value.get("id") in self.loop_symbols:
                return self.loop_symbols[value["id"]][1]
            target = self._compile_expr(value, x - 220, y)
            if attr == "Length":
                node = self._node(
                    "array_length",
                    "Length",
                    x,
                    y,
                    inputs=[{"name": "array", "type": target.type}],
                    outputs=[{"name": "length", "type": "int32"}],
                )
                self._edge(target, PinRef(node["id"], "array", target.type), "data")
                return PinRef(node["id"], "length", "int32")
            node = self._node(
                "get_property",
                attr,
                x,
                y,
                inputs=[{"name": "target", "type": target.type}],
                outputs=[{"name": "value", "type": "wildcard"}],
                meta={"property": attr},
            )
            self._edge(target, PinRef(node["id"], "target", target.type), "data")
            return PinRef(node["id"], "value", "wildcard")

        if kind == "compare":
            left = self._compile_expr(expr["left"], x - 220, y)
            right = self._compile_expr(expr["comparators"][0], x - 220, y + 100)
            op = expr.get("ops", ["Eq"])[0]
            node = self._node(
                "compare",
                op,
                x,
                y,
                inputs=[{"name": "a", "type": left.type}, {"name": "b", "type": right.type}],
                outputs=[{"name": "result", "type": "bool"}],
                meta={"op": op},
            )
            self._edge(left, PinRef(node["id"], "a", left.type), "data")
            self._edge(right, PinRef(node["id"], "b", right.type), "data")
            return PinRef(node["id"], "result", "bool")

        if kind == "bool_op":
            refs = [self._compile_expr(value, x - 220, y + index * 90) for index, value in enumerate(expr.get("values", []))]
            node = self._node(
                "boolean_op",
                expr.get("op", "And"),
                x,
                y,
                inputs=[{"name": f"in{index}", "type": "bool"} for index, _ in enumerate(refs)],
                outputs=[{"name": "result", "type": "bool"}],
                meta={"op": expr.get("op", "And")},
            )
            for index, ref in enumerate(refs):
                self._edge(ref, PinRef(node["id"], f"in{index}", "bool"), "data")
            return PinRef(node["id"], "result", "bool")

        if kind == "call":
            return self._compile_call(expr, x, y, impure=False)

        node = self._node("comment", f"Unsupported expr: {kind}", x, y, outputs=[{"name": "value", "type": "wildcard"}])
        return PinRef(node["id"], "value", "wildcard")

    def _compile_call(self, expr: dict[str, Any], x: int, y: int, impure: bool) -> PinRef:
        func = expr.get("func", {})
        label = self._expr_label(func)
        inputs = [{"name": f"arg{index}", "type": "wildcard"} for index, _ in enumerate(expr.get("args", []))]
        if impure:
            inputs = [{"name": "exec", "type": "exec"}, *inputs]
        outputs = [{"name": "then", "type": "exec"}] if impure else [{"name": "result", "type": "wildcard"}]
        node = self._node(
            "call_method" if func.get("kind") == "attribute" else "call",
            label,
            x,
            y,
            inputs=inputs,
            outputs=outputs,
            meta={"function": label},
        )
        for index, arg in enumerate(expr.get("args", [])):
            arg_ref = self._compile_expr(arg, x - 220, y + 100 + index * 90)
            self._edge(arg_ref, PinRef(node["id"], f"arg{index}", arg_ref.type), "data")
        return PinRef(node["id"], "then" if impure else "result", "exec" if impure else "wildcard")

    def _result_node(self, values: list[dict[str, Any]], x: int, y: int) -> dict[str, Any]:
        return self._node(
            "function_result",
            "Return",
            x,
            y,
            inputs=[{"name": "exec", "type": "exec"}, *self._outputs()],
            meta={"value_count": len(values)},
        )

    def _node(
        self,
        kind: str,
        label: str,
        x: int,
        y: int,
        inputs: list[dict[str, Any]] | None = None,
        outputs: list[dict[str, Any]] | None = None,
        meta: dict[str, Any] | None = None,
    ) -> dict[str, Any]:
        self.counter += 1
        node = {
            "id": f"{self.function['name']}_{self.counter}",
            "kind": kind,
            "label": label,
            "x": x,
            "y": y,
            "inputs": inputs or [],
            "outputs": outputs or [],
            "meta": meta or {},
        }
        self.nodes.append(node)
        return node

    def _edge(self, source: PinRef, target: PinRef, kind: str) -> None:
        self.edges.append(
            {
                "from": {"node": source.node, "pin": source.pin},
                "to": {"node": target.node, "pin": target.pin},
                "kind": kind,
            }
        )

    def _expr_label(self, expr: dict[str, Any]) -> str:
        if expr.get("kind") == "name":
            return expr.get("id", "")
        if expr.get("kind") == "attribute":
            return f"{self._expr_label(expr.get('value', {}))}.{expr.get('attr', '')}"
        return expr.get("kind", "expr")

    def _array_inner_type(self, type_name: str) -> str:
        if type_name.startswith("TArray<") and type_name.endswith(">"):
            return type_name[7:-1]
        return "wildcard"

    def _literal_type(self, value: Any) -> str:
        if isinstance(value, bool):
            return "bool"
        if isinstance(value, int):
            return "int32"
        if isinstance(value, float):
            return "float"
        if isinstance(value, str):
            return "String"
        return "wildcard"


def compile_source(source: str, schema: EslonCodeSchema | None = None, source_name: str = "<memory>") -> dict[str, Any]:
    parse_result = parse_source(source, source_name)
    module = parse_result.module
    schema = schema or EslonCodeSchema()

    diagnostics = [diagnostic.to_dict() for diagnostic in parse_result.diagnostics]
    diagnostics.extend(schema.diagnose_module(module))

    functions = [FunctionCompiler(function, module.get("variables", [])).compile() for function in module.get("functions", [])]
    return {
        "schema_version": 1,
        "generator": "EslonCode",
        "source": source_name,
        "variables": module.get("variables", []),
        "functions": functions,
        "diagnostics": diagnostics,
    }


def compile_source_to_json(source: str, schema: EslonCodeSchema | None = None, source_name: str = "<memory>") -> str:
    return json.dumps(compile_source(source, schema=schema, source_name=source_name), indent=2, ensure_ascii=False)
