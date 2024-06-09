#ifndef ROGL3_RENDERER_H
#define ROGL3_RENDERER_H

struct WindowSettings {
    //TODO
    //GLFWmonitor *monitor;
    //GLFWwindow *window;
    unsigned int CUR_WIDTH = 800;
    unsigned int CUR_HEIGHT = 600;
}; //predtym } ws;


class Renderer {
public:
    // settings
    const unsigned int SCR_WIDTH = 800;
    const unsigned int SCR_HEIGHT = 600;


    void InitializeRender();
};


#endif //ROGL3_RENDERER_H