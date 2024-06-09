set(CMAKE_CXX_STANDARD 20)

find_package(glm REQUIRED)
find_package(glad REQUIRED)
find_package(glfw3 REQUIRED)
find_package(imgui REQUIRED)
find_package(assimp REQUIRED)


add_library(ROGL3_Core STATIC
        fastSine.cpp
        fastSine.h
        Singleton/TSingleton.cpp
        Singleton/TSingleton.h
        Singleton/PerfAnalyzer.cpp
        Singleton/PerfAnalyzer.h
        Renderer/Renderer.cpp
        Renderer/Renderer.h
)


target_link_libraries(ROGL3_Core glad::glad glfw glm::glm assimp::assimp imgui::imgui)