# EslonCode

## Resumo
`EslonCode` e um plugin local de editor para transformar uma linguagem textual parecida com Python em planos de grafo Blueprint e, em seguida, emitir grafos K2 dentro da Unreal.

Local do plugin:
- `gc/Plugins/EslonCode`

## Objetivo
Criar um fluxo textual para Blueprints que seja sensivel ao contexto da Unreal:

- Tipos primitivos, enums, structs, data assets e arrays.
- Funcoes com multiplas entradas e saidas.
- Chamadas de metodos, acesso a propriedades e fluxo de execucao.
- Interfaces de comunicacao, como `BPI_ItemUseTarget`.
- Eventos de gameplay/editor.
- Layout previsivel de nodes para revisao visual.

## Arquitetura

### Parser Python
O pacote `eslon_code` fica em:
- `gc/Plugins/EslonCode/Content/Python/eslon_code`

Ele faz:
- Leitura de `.eslon`, com compatibilidade legada para `.gscript`.
- Normalizacao de sintaxe, incluindo `AND`, `OR`, `Return`.
- Parse via AST Python.
- Geracao de IR com nodes, pins, conexoes e posicoes.
- Validacao basica contra schema.

### Schema Unreal
O schema atual fica em:
- `gc/Plugins/EslonCode/Schemas/gideon_crawler.schema.json`

Ele registra tipos do projeto, incluindo:
- `DA_InventoryItem`
- `TArray<DA_InventoryItem>`
- `E_ItemType`
- `E_EquipSlot`
- `E_ItemRarity`
- `E_ItemUseResult`
- `BPI_ItemUseTarget`

### Emissor C++ de editor
O modulo `EslonCodeEditor` expoe:
- `UEslonCodeEditorLibrary::EmitBlueprintPlanAsNodes`
- `UEslonCodeEditorLibrary::AddBlueprintMemberVariableFromText`
- `UEslonCodeEditorLibrary::GetWorkspaceManifestPath`
- `UEslonCodeEditorLibrary::LoadWorkspaceManifestFromSourcePath`
- `UEslonCodeEditorLibrary::SaveWorkspaceManifestToSourcePath`
- `UEslonCodeEditorLibrary::CompileSourceFileToPlanJson`
- `UEslonCodeEditorLibrary::SyncBlueprintFromSourceFile`
- `UEslonCodeEditorLibrary::GetDefaultSchemaPath`
- `SEslonCodeStudio`

O emissor atual:
- Cria funcoes novas no Blueprint alvo.
- Protege funcoes existentes que nao tenham marcador `@EslonCodeGenerated`.
- Substitui apenas grafos gerados pelo proprio plugin quando `replace_generated_graphs` esta ativo.
- Cria nodes reais para entrada de funcao, retorno e branch.
- Cria variaveis de membro quando o tipo e resolvido pelo emissor C++.
- Preserva nodes ainda nao suportados como comentarios posicionados, sem perder informacao do IR.

## Exemplo atual
Arquivo:
- `gc/Plugins/EslonCode/Examples/BPC_Inventory.eslon`

Ele cobre:
- `AddItem(ItemData) -> Success`
- `HasItem(RequiredItemType, RequiredItemCode) -> Found, ItemIndex`

## Uso via Python dentro da Unreal

```python
import eslon_code.unreal_bridge as ec

ec.emit_file_to_blueprint(
    r"D:\Arquivos\Game Developer\gideon-crawler\gc\Plugins\EslonCode\Examples\BPC_Inventory.eslon",
    "/Game/BIN_GC/BP/PLAYER/MASTER/BPC_Inventory",
    replace_generated_graphs=True,
    compile_after_emit=False,
)
```

`compile_after_emit` deve ficar `False` enquanto o emissor ainda cria comentarios para nodes puros como comparacoes, length e chamadas de array.

## Uso fora da Unreal

```powershell
$env:PYTHONPATH="D:\Arquivos\Game Developer\gideon-crawler\gc\Plugins\EslonCode\Content\Python"
python -m eslon_code.cli "D:\Arquivos\Game Developer\gideon-crawler\gc\Plugins\EslonCode\Examples\BPC_Inventory.eslon" --schema "D:\Arquivos\Game Developer\gideon-crawler\gc\Plugins\EslonCode\Schemas\gideon_crawler.schema.json" --out "D:\Arquivos\Game Developer\gideon-crawler\gc\Plugins\EslonCode\Saved\Plans\BPC_Inventory.plan.json"
```

## Sintaxe MVP

```python
var InventoryItems: TArray<DA_InventoryItem>
var MaxSlotItems: int32

def AddItem(ItemData: DA_InventoryItem) -> (Success: bool):
    if InventoryItems.Length == MaxSlotItems:
        return False
    else:
        InventoryItems.Add(ItemData)
        return True
```

Suportado no parser/IR:
- Variaveis top-level com `var Name: Type`.
- Funcoes com parametros tipados.
- Retornos nomeados com `-> (Name: Type, Other: Type)`.
- `if/else`.
- `for Item in Array`.
- `return`.
- Chamadas como `InventoryItems.Add(ItemData)`.
- Acesso a propriedades como `ItemData.ItemType`.
- Operadores `AND`, `OR`, `==`, `>`, `<`.

## Proximas etapas
- Emitir nodes puros reais para `Length`, comparacoes e boolean `AND`.
- Emitir `ForEachLoop` usando macro padrao da Unreal ou expansao C++ propria.
- Resolver assets Blueprint do schema para tipos de pins de `DA_InventoryItem`, enums e interfaces.
- Adicionar preview de diff entre o script, o manifest e o Blueprint gerado.
- Implementar import reverso parcial: Blueprint selecionado para IR/texto.
