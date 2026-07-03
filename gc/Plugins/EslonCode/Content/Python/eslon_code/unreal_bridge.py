from __future__ import annotations

import json
from pathlib import Path
from typing import Any

from .compiler import compile_source
from .schema import EslonCodeSchema


PLUGIN_ROOT = Path(__file__).resolve().parents[3]
DEFAULT_SCHEMA = PLUGIN_ROOT / "Schemas" / "gideon_crawler.schema.json"
EXAMPLE_SOURCE = PLUGIN_ROOT / "Examples" / "BPC_Inventory.eslon"
LEGACY_EXAMPLE_SOURCE = PLUGIN_ROOT / "Examples" / "BPC_Inventory.gscript"


def compile_file_to_plan(source_path: str | Path, schema_path: str | Path | None = DEFAULT_SCHEMA) -> dict[str, Any]:
    source_path = Path(source_path)
    schema = EslonCodeSchema.load(schema_path)
    return compile_source(source_path.read_text(encoding="utf-8"), schema=schema, source_name=str(source_path))


def write_plan(plan: dict[str, Any], output_path: str | Path) -> Path:
    output_path = Path(output_path)
    output_path.parent.mkdir(parents=True, exist_ok=True)
    output_path.write_text(json.dumps(plan, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    return output_path


def compile_plugin_example_to_saved_plan() -> Path:
    output_path = _saved_plan_dir() / "BPC_Inventory.plan.json"
    example_source = EXAMPLE_SOURCE if EXAMPLE_SOURCE.exists() else LEGACY_EXAMPLE_SOURCE
    plan = compile_file_to_plan(example_source)
    path = write_plan(plan, output_path)
    _log(f"EslonCode example plan written to: {path}")
    return path


def emit_file_to_blueprint(
    source_path: str | Path,
    blueprint_asset_path: str,
    replace_generated_graphs: bool = True,
    compile_after_emit: bool = False,
    schema_path: str | Path | None = DEFAULT_SCHEMA,
) -> Any:
    try:
        import unreal
    except Exception as exc:
        raise RuntimeError("emit_file_to_blueprint must run inside the Unreal Editor Python environment.") from exc

    blueprint = unreal.load_asset(blueprint_asset_path)
    if blueprint is None:
        raise RuntimeError(f"Could not load Blueprint asset: {blueprint_asset_path}")

    plan = compile_file_to_plan(source_path, schema_path=schema_path)
    plan_json = json.dumps(plan, ensure_ascii=False)
    result = unreal.EslonCodeEditorLibrary.emit_blueprint_plan_as_nodes(
        blueprint,
        plan_json,
        replace_generated_graphs,
        compile_after_emit,
    )
    _log(f"EslonCode emitted plan to {blueprint_asset_path}: {result}")
    return result


def _saved_plan_dir() -> Path:
    try:
        import unreal

        return Path(unreal.Paths.project_saved_dir()) / "EslonCodePlans"
    except Exception:
        return PLUGIN_ROOT / "Saved" / "Plans"


def _log(message: str) -> None:
    try:
        import unreal

        unreal.log(message)
    except Exception:
        print(message)
