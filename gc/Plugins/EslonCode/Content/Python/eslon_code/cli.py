from __future__ import annotations

import argparse
import json
from pathlib import Path

from .compiler import compile_source
from .schema import EslonCodeSchema


def main() -> int:
    parser = argparse.ArgumentParser(description="Compile EslonCode source into a Blueprint graph plan JSON.")
    parser.add_argument("source", type=Path, help="Path to a .gscript file.")
    parser.add_argument("--schema", type=Path, default=None, help="Optional EslonCode schema JSON.")
    parser.add_argument("--out", type=Path, default=None, help="Optional output JSON path.")
    args = parser.parse_args()

    source_text = args.source.read_text(encoding="utf-8")
    schema = EslonCodeSchema.load(args.schema)
    plan = compile_source(source_text, schema=schema, source_name=str(args.source))
    output = json.dumps(plan, indent=2, ensure_ascii=False)

    if args.out:
        args.out.parent.mkdir(parents=True, exist_ok=True)
        args.out.write_text(output + "\n", encoding="utf-8")
    else:
        print(output)

    return 1 if any(diagnostic.get("severity") == "error" for diagnostic in plan.get("diagnostics", [])) else 0


if __name__ == "__main__":
    raise SystemExit(main())
