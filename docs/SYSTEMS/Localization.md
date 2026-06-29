# Localization System

## Objetivo
Manter textos do jogo em PT-BR e EN usando os recursos de localização da Unreal.

## Ativos relacionados
- `gc/Content/BIN_GC/LOCALIZATION/STRINGTABLES/ST_UI.uasset`
- `gc/Content/BIN_GC/LOCALIZATION/STRINGTABLES/ST_Messages.uasset`
- `gc/Content/BIN_GC/LOCALIZATION/STRINGTABLES/ST_Items.uasset`
- `gc/Content/BIN_GC/LOCALIZATION/STRINGTABLES/ST_Dialogs.uasset`
- `gc/Content/BIN_GC/LOCALIZATION/ENUM/ELanguagesEnum.uasset`

## Regras
- Textos de UI, mensagens, itens e diálogos devem usar string tables sempre que possível.
- Mensagens de gameplay, como "Não é possível usar aqui.", devem estar em `ST_Messages`.
- Nomes e descrições de itens devem estar em `ST_Items`.
- Falas e pistas narrativas devem estar em `ST_Dialogs`.
- Widgets não devem hardcodar texto que precise de tradução.
