set(CMAKE_CXX_STANDARD 20)


add_library(ROGL3_Core OBJECT
        fastSine.cpp
        fastSine.h
        Singleton/TSingleton.cpp
        Singleton/TSingleton.h
        Singleton/PerfAnalyzer.cpp
        Singleton/PerfAnalyzer.h
)

target_link_libraries(ROGL3 PUBLIC ROGL3_Core)