#include <window.h>

class Rubik : public window
{
public:
    void onInit()
    {
        glClearColor(1.0f, 1.0f, 0.0f, 1.0f);
    }

    void onUpdate()
    {

    }
};

int main(void)
{
    Rubik test;
    test.Run(800, 600, "NEGRO!");
}