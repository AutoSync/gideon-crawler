# EslonCode

EslonCode is an editor plugin for converting a Python-like textual DSL into Blueprint graph plans and generated K2 graphs.

Current MVP:
- Parses `.gscript` files into a typed intermediate representation.
- Validates declared types against `Schemas/gideon_crawler.schema.json`.
- Computes nodes, pins, edges and layout positions.
- Exposes an Unreal editor C++ bridge through `UEslonCodeEditorLibrary`.
- Emits function graphs with real entry, return and branch nodes; unsupported pure nodes are added as comments so the graph is reviewable without losing layout information.

Python console example inside Unreal:

```python
import eslon_code.unreal_bridge as gs
gs.emit_file_to_blueprint(
    r"D:\Arquivos\Game Developer\gideon-crawler\gc\Plugins\EslonCode\Examples\BPC_Inventory.gscript",
    "/Game/BIN_GC/BP/PLAYER/MASTER/BPC_Inventory",
    replace_generated_graphs=True,
    compile_after_emit=False,
)
```

Command-line plan generation outside Unreal:

```powershell
python -m eslon_code.cli .\Examples\BPC_Inventory.gscript --schema .\Schemas\gideon_crawler.schema.json --out .\Saved\Plans\BPC_Inventory.plan.json
```
