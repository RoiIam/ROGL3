set(CMAKE_CXX_STANDARD 20)


add_library(ROGL3_Core OBJECT
        fastSine.cpp
)

target_link_libraries(ROGL3 PUBLIC ROGL3_Core)