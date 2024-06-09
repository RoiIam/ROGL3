//#include "fastSine.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "assimp/scene.h"
#include "glm/glm.hpp"
#include "fastSine.h"

#include <iostream>
#include "Singleton/PerfAnalyzer.h"
#include "Renderer/Renderer.h"

void framebuffer_size_callback(GLFWwindow *window, int width, int height);

void processInput(GLFWwindow *window);


const char *vertexShaderSource = "#version  330 core\n"
                                 "layout (location = 0) in vec3 aPos;\n"
                                 "void main()\n"
                                 "{\n"
                                 "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
                                 "}\0";
const char *fragmentShaderSource = "#version 330 core\n"
                                   "out vec4 FragColor;\n"
                                   "void main()\n"
                                   "{\n"
                                   "   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
                                   "}\n\0";

int main() {
    auto *f = new FastSine();
    f->TestSine();
    delete f;

    PerfAnalyzer::getInstance().log();
    PerfAnalyzer::getInstance().print();

    auto renderer = Renderer();
    renderer.InitializeRender();
}

