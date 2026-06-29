# Eslon 2D

2D development framework for Unreal Engine. The plugin is split into:

- `Eslon2D`: runtime module for gameplay systems such as tilemaps, tile animation data, and tile replacement from Blueprint/C++.
- `Eslon2DEditor`: editor module for the custom locked orthographic viewport and 2D authoring tools.

The current runtime foundation includes `UEslon2DTileMapAsset` and `UEslon2DTileMapComponent`, with Blueprint-callable tile replacement APIs:

- `SetTile`
- `GetTile`
- `ClearTile`
- `ResizeMap`
- `InitializeFromAsset`

## Usage

1. Open the Unreal Editor.
2. Go to `Window > Eslon 2D Viewport`.
3. Choose a plane:
   - `Top Down`: edits in XY and uses Z as layer depth.
   - `Side Scroller`: edits in XZ and uses Y as layer depth.
   - `Front`: edits in YZ and uses X as layer depth.
4. Choose a layer and click `Assign Selected`.

Assigned actors receive:

- A folder path like `2D/Background`.
- A tag like `2DLayer.Background`.
- A depth position based on the active plane.

## Controls

- Right mouse drag: pan.
- Mouse wheel: zoom.
- Camera rotation is locked by the viewport client.

## Build note

UE 5.8 editor builds require the .NET Framework SDK used by Unreal's editor dependency chain. If `BuildPlugin` fails before compiling this plugin with a `SwarmInterface` / `NetFxSDK` error, install a .NET Framework SDK 4.6 or newer through the Visual Studio Installer individual components.
