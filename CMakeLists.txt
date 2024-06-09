cmake_minimum_required(VERSION 3.28)
project(ROGL3)

#cmake flags
set(CMAKE_FIND_DEBUG_MODE TRUE)
#compiler flags
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS -g)



#packages
#find_package(stb)
find_package(glm REQUIRED)
find_package(glad)
find_package(glfw3)
find_package(imgui)
find_package(assimp)






add_executable(ROGL3 main.cpp)
target_compile_options(ROGL3 PUBLIC -ggdb)

set(CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR} ${CMAKE_MODULE_PATH})
include_directories(Core)
add_subdirectory(Core)

#
# stb::stb
target_link_libraries(ROGL3 glad::glad glfw glm::glm assimp::assimp imgui::imgui ROGL3_Core)