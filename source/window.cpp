#include <window.h>

window::window()
{

}

window::~window()
{

}

void window::Run(int w, int h, const char* title)
{
    glfwInit();

    m_window = glfwCreateWindow(w, h, title, NULL, NULL);
    if(!m_window)
    {
        printf("[ERROR] System halted! exited!");
        exit(-1);
    }
    glfwMakeContextCurrent(m_window);

    gladLoadGL();

    onInit();

    while(!glfwWindowShouldClose(m_window))
    {
        onUpdate();
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(m_window);
        glfwPollEvents();
    }
}