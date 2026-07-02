from __future__ import annotations

import json
from pathlib import Path
from typing import Any


class EslonCodeSchema:
    def __init__(self, data: dict[str, Any] | None = None):
        self.data = data or {"types": {}, "interfaces": {}, "events": {}}

    @classmethod
    def load(cls, path: str | Path | None) -> "EslonCodeSchema":
        if not path:
            return cls()
        schema_path = Path(path)
        if not schema_path.exists():
            return cls()
        return cls(json.loads(schema_path.read_text(encoding="utf-8")))

    def has_type(self, type_name: str) -> bool:
        type_name = type_name.strip()
        if not type_name or type_name == "wildcard":
            return True
        if type_name.startswith("TArray<") and type_name.endswith(">"):
            return self.has_type(type_name[7:-1])
        return type_name in self.data.get("types", {})

    def type_info(self, type_name: str) -> dict[str, Any]:
        return self.data.get("types", {}).get(type_name.strip(), {})

    def diagnose_module(self, module: dict[str, Any]) -> list[dict[str, Any]]:
        diagnostics: list[dict[str, Any]] = []

        for variable in module.get("variables", []):
            self._diagnose_type(variable.get("type", ""), diagnostics, variable.get("line", 0), "")

        for function in module.get("functions", []):
            function_name = function.get("name", "")
            for pin in function.get("inputs", []) + function.get("outputs", []):
                self._diagnose_type(pin.get("type", ""), diagnostics, function.get("line", 0), function_name)

        return diagnostics

    def _diagnose_type(self, type_name: str, diagnostics: list[dict[str, Any]], line: int, function: str) -> None:
        if self.has_type(type_name):
            return
        diagnostics.append(
            {
                "severity": "warning",
                "message": f"Type '{type_name}' is not registered in the EslonCode schema yet.",
                "line": line,
                "function": function,
            }
        )
