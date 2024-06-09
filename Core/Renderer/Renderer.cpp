#include "Renderer.h"
#include <iostream>

#include <glad/glad.h>
#include "glm/glm.hpp"
#include <GLFW/glfw3.h>
void Renderer::InitializeRender()
{
    /*
    // check c++ version
    if (__cplusplus == 202002L) std::cout << "C++20\n";
    else if (__cplusplus == 201703L) std::cout << "C++17\n";
    else if (__cplusplus == 201402L) std::cout << "C++14\n";
    else if (__cplusplus == 201103L) std::cout << "C++11\n";
    else if (__cplusplus == 199711L) std::cout << "C++98\n";
    else std::cout << "unknown or older C++ version\n";
    */

    if (!glfwInit())
        std::cout<<"GLFW FAILED TO INIT!!!!\n";

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    //TODO
    //make it decl. WindowSettings windowSettings = WindowSettings();
    //dont forget scene, window and monitor

    /*windowSettings.monitor = glfwGetPrimaryMonitor();
    windowSettings.CUR_WIDTH = SCR_WIDTH;
    windowSettings.CUR_HEIGHT = SCR_HEIGHT;
    windowSettings.window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "Hello World", NULL, NULL);
    if (!windowSettings.window) {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();

        return -1;
    }


    glfwMakeContextCurrent(windowSettings.window);
    glfwSetFramebufferSizeCallback(windowSettings.window, framebuffer_size_callback);
    glfwSetKeyCallback(windowSettings.window, keyboard_callback);
    //glfwSetCharCallback(windowSettings.window, character_callback);//use either char or key not both-doubled inputs
    glfwSetCursorPosCallback(windowSettings.window, mouse_callback);
    glfwSetScrollCallback(windowSettings.window, scroll_callback);
    glfwSetMouseButtonCallback(windowSettings.window, mouse_button_callback);
    // tell GLFW to capture our mouse
    // glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
    glfwSetInputMode(windowSettings.window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);


    //glad needs to be after make context current window
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }
    // tell stb_image.h to flip loaded texture's on the y-axis (before loading model).
    stbi_set_flip_vertically_on_load(true); //this is needed for models, but screws our edited skybox

    std::cout << "Hello, World!" << std::endl;

*/
}
