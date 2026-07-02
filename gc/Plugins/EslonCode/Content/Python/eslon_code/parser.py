from __future__ import annotations

import ast
import re
from dataclasses import dataclass, field
from typing import Any


_NAME = r"[A-Za-z_][A-Za-z0-9_]*"
_VAR_TYPED_RE = re.compile(
    rf"^(?:var\s+)?(?P<name>{_NAME})\s*:\s*(?P<type>[^=#]+?)(?:\s*=\s*(?P<default>[^#]+))?\s*(?:#(?P<comment>.*))?$"
)
_VAR_LEGACY_RE = re.compile(
    rf"^(?P<name>{_NAME})\s*=\s*(?P<type>[A-Za-z_][A-Za-z0-9_<>, ./']*)\s*(?:#(?P<comment>.*))?$"
)
_FUNCTION_RE = re.compile(
    rf"^def\s+(?P<name>{_NAME})\s*\((?P<inputs>[^)]*)\)\s*(?:->\s*(?P<outputs>.+?))?\s*:?\s*$"
)


@dataclass
class Diagnostic:
    severity: str
    message: str
    line: int = 0
    function: str = ""

    def to_dict(self) -> dict[str, Any]:
        return {
            "severity": self.severity,
            "message": self.message,
            "line": self.line,
            "function": self.function,
        }


@dataclass
class ParseResult:
    module: dict[str, Any]
    diagnostics: list[Diagnostic] = field(default_factory=list)

    def to_dict(self) -> dict[str, Any]:
        result = dict(self.module)
        result["diagnostics"] = [diagnostic.to_dict() for diagnostic in self.diagnostics]
        return result


def parse_source(source: str, source_name: str = "<memory>") -> ParseResult:
    diagnostics: list[Diagnostic] = []
    variables: list[dict[str, Any]] = []
    functions: list[dict[str, Any]] = []

    lines = source.replace("\r\n", "\n").replace("\r", "\n").split("\n")
    index = 0
    while index < len(lines):
        raw_line = lines[index]
        stripped = raw_line.strip()

        if not stripped or stripped.startswith("#"):
            index += 1
            continue

        if raw_line[:1].isspace():
            diagnostics.append(Diagnostic("warning", "Ignoring indented text outside a function.", index + 1))
            index += 1
            continue

        if stripped.startswith("def "):
            block, next_index = _collect_function_block(lines, index)
            function = _parse_function_block(block, index + 1, diagnostics)
            if function:
                functions.append(function)
            index = next_index
            continue

        variable = _parse_variable_line(raw_line, index + 1)
        if variable:
            variables.append(variable)
        else:
            diagnostics.append(Diagnostic("warning", f"Unrecognized top-level statement: {stripped}", index + 1))
        index += 1

    return ParseResult(
        module={
            "source": source_name,
            "variables": variables,
            "functions": functions,
        },
        diagnostics=diagnostics,
    )


def _collect_function_block(lines: list[str], start_index: int) -> tuple[list[str], int]:
    block = [lines[start_index]]
    index = start_index + 1
    while index < len(lines):
        line = lines[index]
        stripped = line.strip()
        if stripped and not line[:1].isspace() and not stripped.startswith("#"):
            break
        block.append(line)
        index += 1
    return block, index


def _parse_variable_line(raw_line: str, line_number: int) -> dict[str, Any] | None:
    stripped = raw_line.strip()
    match = _VAR_TYPED_RE.match(stripped)
    if not match:
        match = _VAR_LEGACY_RE.match(stripped)
    if not match:
        return None

    type_name = match.group("type").strip()
    return {
        "name": match.group("name"),
        "type": type_name,
        "default": (match.group("default") or "").strip(),
        "comment": (match.group("comment") or "").strip(),
        "line": line_number,
    }


def _parse_function_block(block: list[str], line_number: int, diagnostics: list[Diagnostic]) -> dict[str, Any] | None:
    header = block[0].strip()
    match = _FUNCTION_RE.match(header)
    if not match:
        diagnostics.append(Diagnostic("error", f"Invalid function header: {header}", line_number))
        return None

    name = match.group("name")
    inputs = _parse_pin_list(match.group("inputs") or "", default_type="wildcard")
    outputs = _parse_output_list(match.group("outputs") or "")

    param_names = ", ".join(pin["name"] for pin in inputs)
    body_lines = [_normalize_body_line(line) for line in block[1:]]
    if not any(line.strip() for line in body_lines):
        body_lines = ["    pass"]

    python_source = f"def __gideon_tmp__({param_names}):\n" + "\n".join(body_lines)
    try:
        parsed = ast.parse(python_source)
    except SyntaxError as exc:
        diagnostics.append(
            Diagnostic("error", f"Function '{name}' has invalid EslonCode syntax: {exc.msg}", line_number + (exc.lineno or 1) - 1, name)
        )
        return None

    function_def = parsed.body[0]
    assert isinstance(function_def, ast.FunctionDef)

    return {
        "name": name,
        "inputs": inputs,
        "outputs": outputs,
        "body": [_statement_to_dict(statement) for statement in function_def.body if not isinstance(statement, ast.Pass)],
        "line": line_number,
    }


def _split_commas(text: str) -> list[str]:
    parts: list[str] = []
    current: list[str] = []
    depth = 0
    for char in text:
        if char in "(<[":
            depth += 1
        elif char in ")>]":
            depth = max(0, depth - 1)
        if char == "," and depth == 0:
            part = "".join(current).strip()
            if part:
                parts.append(part)
            current = []
        else:
            current.append(char)
    tail = "".join(current).strip()
    if tail:
        parts.append(tail)
    return parts


def _parse_pin_list(text: str, default_type: str) -> list[dict[str, Any]]:
    pins: list[dict[str, Any]] = []
    for item in _split_commas(text):
        if not item:
            continue
        if ":" in item:
            name, type_name = item.split(":", 1)
        else:
            name, type_name = item, default_type
        pins.append({"name": name.strip(), "type": type_name.strip()})
    return pins


def _parse_output_list(text: str) -> list[dict[str, Any]]:
    text = text.strip()
    if not text:
        return []
    if text.startswith("(") and text.endswith(")"):
        return _parse_pin_list(text[1:-1], default_type="wildcard")
    if ":" in text:
        return _parse_pin_list(text, default_type="wildcard")
    return [{"name": "ReturnValue", "type": text}]


def _normalize_body_line(line: str) -> str:
    indent = line[: len(line) - len(line.lstrip())]
    stripped = line.strip()

    if not stripped:
        return line

    replacements = {
        r"\bAND\b": "and",
        r"\bOR\b": "or",
        r"\bNOT\b": "not",
        r"\bTRUE\b": "True",
        r"\bFALSE\b": "False",
    }
    for pattern, replacement in replacements.items():
        stripped = re.sub(pattern, replacement, stripped)
    stripped = stripped.replace("&&", " and ").replace("||", " or ")

    if stripped.startswith("Return"):
        rest = stripped[len("Return") :].strip()
        if rest.startswith("="):
            rest = rest[1:].strip()
        stripped = f"return {rest}" if rest else "return"

    return indent + stripped


def _statement_to_dict(statement: ast.stmt) -> dict[str, Any]:
    if isinstance(statement, ast.If):
        return {
            "kind": "if",
            "test": _expr_to_dict(statement.test),
            "body": [_statement_to_dict(child) for child in statement.body if not isinstance(child, ast.Pass)],
            "else": [_statement_to_dict(child) for child in statement.orelse if not isinstance(child, ast.Pass)],
            "line": statement.lineno,
        }
    if isinstance(statement, ast.For):
        return {
            "kind": "for_each",
            "target": _expr_to_dict(statement.target),
            "iter": _expr_to_dict(statement.iter),
            "body": [_statement_to_dict(child) for child in statement.body if not isinstance(child, ast.Pass)],
            "else": [_statement_to_dict(child) for child in statement.orelse if not isinstance(child, ast.Pass)],
            "line": statement.lineno,
        }
    if isinstance(statement, ast.Return):
        return {
            "kind": "return",
            "values": _return_values_to_list(statement.value),
            "line": statement.lineno,
        }
    if isinstance(statement, ast.Assign):
        return {
            "kind": "assign",
            "targets": [_expr_to_dict(target) for target in statement.targets],
            "value": _expr_to_dict(statement.value),
            "line": statement.lineno,
        }
    if isinstance(statement, ast.Expr):
        return {
            "kind": "expr",
            "value": _expr_to_dict(statement.value),
            "line": statement.lineno,
        }
    return {"kind": "unsupported_statement", "node_type": type(statement).__name__, "line": getattr(statement, "lineno", 0)}


def _return_values_to_list(value: ast.expr | None) -> list[dict[str, Any]]:
    if value is None:
        return []
    if isinstance(value, ast.Tuple):
        return [_expr_to_dict(item) for item in value.elts]
    return [_expr_to_dict(value)]


def _expr_to_dict(expr: ast.AST) -> dict[str, Any]:
    if isinstance(expr, ast.Name):
        return {"kind": "name", "id": expr.id}
    if isinstance(expr, ast.Constant):
        return {"kind": "literal", "value": expr.value, "value_type": type(expr.value).__name__}
    if isinstance(expr, ast.Attribute):
        return {"kind": "attribute", "value": _expr_to_dict(expr.value), "attr": expr.attr}
    if isinstance(expr, ast.Call):
        return {
            "kind": "call",
            "func": _expr_to_dict(expr.func),
            "args": [_expr_to_dict(arg) for arg in expr.args],
            "keywords": [{"name": keyword.arg, "value": _expr_to_dict(keyword.value)} for keyword in expr.keywords],
        }
    if isinstance(expr, ast.Compare):
        return {
            "kind": "compare",
            "left": _expr_to_dict(expr.left),
            "ops": [_operator_name(op) for op in expr.ops],
            "comparators": [_expr_to_dict(comparator) for comparator in expr.comparators],
        }
    if isinstance(expr, ast.BoolOp):
        return {
            "kind": "bool_op",
            "op": _operator_name(expr.op),
            "values": [_expr_to_dict(value) for value in expr.values],
        }
    if isinstance(expr, ast.BinOp):
        return {
            "kind": "binary_op",
            "op": _operator_name(expr.op),
            "left": _expr_to_dict(expr.left),
            "right": _expr_to_dict(expr.right),
        }
    if isinstance(expr, ast.UnaryOp):
        if isinstance(expr.op, ast.USub) and isinstance(expr.operand, ast.Constant) and isinstance(expr.operand.value, (int, float)):
            return {"kind": "literal", "value": -expr.operand.value, "value_type": type(expr.operand.value).__name__}
        return {"kind": "unary_op", "op": _operator_name(expr.op), "value": _expr_to_dict(expr.operand)}
    if isinstance(expr, ast.Subscript):
        return {"kind": "subscript", "value": _expr_to_dict(expr.value), "slice": _expr_to_dict(expr.slice)}
    return {"kind": "unsupported_expr", "node_type": type(expr).__name__}


def _operator_name(operator: ast.AST) -> str:
    return type(operator).__name__
