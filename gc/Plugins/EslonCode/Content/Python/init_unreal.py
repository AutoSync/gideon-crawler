import sys
from pathlib import Path


PLUGIN_ROOT = Path(__file__).resolve().parents[2]
PYTHON_ROOT = PLUGIN_ROOT / "Content" / "Python"

if str(PYTHON_ROOT) not in sys.path:
    sys.path.insert(0, str(PYTHON_ROOT))


def _register_unreal_menu():
    try:
        import unreal
    except Exception:
        return

    try:
        menus = unreal.ToolMenus.get()
        menu = menus.extend_menu("LevelEditor.MainMenu.Tools")
        section = menu.find_or_add_section("EslonCode")

        entry = unreal.ToolMenuEntry(
            name="EslonCode_CompileExamplePlan",
            type=unreal.MultiBlockType.MENU_ENTRY,
        )
        entry.set_label("Compile EslonCode Example Plan")
        entry.set_tool_tip("Compile the plugin inventory example into Saved/EslonCodePlans as JSON.")
        entry.set_string_command(
            unreal.ToolMenuStringCommandType.PYTHON,
            "",
            "import eslon_code.unreal_bridge as gs; gs.compile_plugin_example_to_saved_plan()",
        )
        section.add_entry(entry)
        menus.refresh_all_widgets()
    except Exception as exc:
        try:
            unreal.log_warning(f"EslonCode menu registration failed: {exc}")
        except Exception:
            pass


_register_unreal_menu()
