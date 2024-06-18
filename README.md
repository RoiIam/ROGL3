# ROGL3

This is a major rewrite of ROGL, my C++ OpenGL game "engine". This rewrite focuses on better architecture and adding new functionality. Originally was made for my Bachelor's thesis project. After that was slowly updated. Many thanks to Joey De Vries's [LearnOpenGL](https://learnopengl.com/) and Yan Chernikov ([Cherno](https://www.youtube.com/user/TheChernoProject/)) tutorials that got me started.

[![Showcase](https://img.youtube.com/vi/UFbSrLIqUKQ/0.jpg)](https://www.youtube.com/watch?v=UFbSrLIqUKQ) 

(Click to play on youtube)

## Features
- Forward and Deferred rendering
- Water refraction and reflection 
- Various 3D model format support thanks to ASSIMP
- Object manipulation with ImGUI
- SSAO in deferred rendering
- Loading of different scenes
- Various 2D minigames
- Cubic Bezier interpolation for smooth camera motion along a path

## TODO (in no particular order)
- Add missing features
- PBR
- Skeletal Anim
- Refactor architecture
- Better test coverage
- 2D/3D separation
- Frustum culling
- Space partitioning - BSP
- Physics - Bullet/Box2D
- Engine-game template separation
- Audio - vorbis/FMOD?
- Add Vulkan alongside OpenGL API 
- Add simple VR - *nice to have*
- Try to rewrite my CPU renderer to use GPU accel. RTX with BVH
- Multithreading: renderer, physics, etc
- Try to incorporate FSR/DLSS - *for fun, nice to have*
- ...



Project uses GLFW and GLAD loader. CMake build system is used with MSYS2 MinGW64+Clang compiler. We now use Conan 2.0 package manager. We use ASSIMP and stb_image to load models and textures. ImGUI is used for simple and quick UI. 

