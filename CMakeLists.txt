cmake_minimum_required(VERSION 3.28)
project(ROGL3)

set(CMAKE_CXX_STANDARD 20)




#packages
# ...
#find_package(stb)
find_package(glm REQUIRED)
find_package(glad)
find_package(glfw3)
find_package(imgui)
find_package(assimp)






add_executable(ROGL3 main.cpp)


#
# stb::stb
target_link_libraries(ROGL3 glad::glad glfw glm::glm assimp::assimp imgui::imgui)