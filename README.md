# OpenGL Cpp Starter
Forked from: mfl28/opengl-cpp-starter

This repo provides easy to use starter code for OpenGL C++ projects 
using modern CMake. The included CMake scripts automatically fetch and link [glfw](https://github.com/glfw/glfw), [glad](https://github.com/Dav1dde/glad), [glm](https://github.com/g-truc/glm) and [stb_image](https://github.com/nothings/stb). Optionally, you can also fetch and link [assimp](https://github.com/assimp/assimp) (see [Generating build system](#generate-build-system)). The sample OpenGL code is based on [learnopengl.com](https://learnopengl.com) and currently just opens a blank window. 

## Getting started

**Requirements**

-   [CMake](https://cmake.org/) (minimum version 3.18.0)

### Clone

```bash
git clone https://github.com/mfl28/opengl-cpp-starter.git
cd opengl-cpp-starter
```

### Generate build system

```bash
# Useful options:
# -D USE_ASSIMP=(YES|NO) (fetch and link assimp library, default: NO)
cmake -B build
```

### Build

```bash
# Useful options:
# --parallel <max-processor-number> (build in parallel)
cmake --build build
```

### Run

#### Linux / MacOS

```bash
cd build
./starter
```

#### Windows

```bash
# When using Visual Studio as generator:
cd build\(Debug|Release)
.\starter
```

## License

This repository  is licensed under MIT, see [LICENSE](LICENSE).
