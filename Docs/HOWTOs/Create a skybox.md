# Create a skybox

## Tutorials

- [Video tutorial: Space Skybox Creation](https://www.youtube.com/watch?v=JSRsQpRfDlk)
- [Step-by-step: Simple Space Skybox](https://answers.unrealengine.com/questions/15307/how-to-create-simple-space-skybox.html)

## TLDR

There is an example map here: ```Content/Maps/Examples/Skybox.umap```.

Space skybox textures can be easily created using [Spacescape](http://alexcpeterson.com/spacescape/). Spacescape is a free tool for free and commercial games.

Recommended export settings are:
- Files of type: Single DDS Cube Map(*.dds)
- Image size: 4096
- Export for: SOURCE (UNREAL option needs to be investigated)

Recommended texture import settings are:
- Compression/Compress without alpha: enabled
- Level Of Detail/Mip Gen Settings: NoMipmaps
- Level Of Detail/Texture group: Skybox