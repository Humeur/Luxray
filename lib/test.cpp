/*
** Luxray
** Github: https://github.com/Humeur
** Discord: Humeur#0001
*/

#include "test.hpp"

class Bob {
    public:
        std::string face = "\\0v0/";
        int size = 20;
        int x = 0;
        int y = 0;
        Color color = RED;
        int speed = 1;
};

int main()
{
    LR::Window window;

    window.setTitle("Wheel of chance !")
            .setSize(window.getMonitorWidth(), window.getMonitorHeight())
            .setTargetFPS(60)
            .setPosition(0, 0)
            .setState(FLAG_WINDOW_RESIZABLE);

    LR::Cursor::disable();
    LR::Cursor::hide();

    Bob bob;
    bob.x = window.getWidth() / 2;
    bob.y = window.getHeight() / 2;

    while (!window.shouldClose())
    {
        LR::Window::draw([&window]() {
            LR::Window::clearBackground(BLACK);

            LR::Shapes::drawCircleSector((Vector2){(float)window.getWidth() / 2, (float)window.getHeight() / 2},
                                         (float)window.getWidth() / 4,
                                         0.0f,
                                         90.0f,
                                         0.1f, RED);
        });
    }

    return 0;
}