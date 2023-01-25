#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <cstdlib>
#include <cstdio>

class window
{
private:
    GLFWwindow* m_window;

public:
    window();
    ~window();

    virtual void onInit() = 0;
    virtual void onUpdate() = 0;
    void Run(int w, int h, const char* title);

};
