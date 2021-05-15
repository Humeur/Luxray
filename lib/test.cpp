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
    LR::Window window(1920, 1080, "Bob's Adventure");

    window.setPosition(0,0)
          .setTargetFPS(60)
          .setSize(window.getMonitorWidth(), window.getMonitorHeight());

    Cursor::disable();
    Cursor::hide();

    Bob bob;
    bob.x = window.getWidth() / 2;
    bob.y = window.getHeight() / 2;

    while (!window.shouldClose())
    {
        bob.size += (Mouse::getWheelMove() * 4);

        if (Keyboard::isKeyDown(KEY_LEFT_SHIFT)) bob.speed = 3;
        if (Keyboard::isKeyDown(KEY_RIGHT)) bob.x += 4 * bob.speed;
        if (Keyboard::isKeyDown(KEY_LEFT)) bob.x -= 4 * bob.speed;
        if (Keyboard::isKeyDown(KEY_UP)) bob.y -= 4 * bob.speed;
        if (Keyboard::isKeyDown(KEY_DOWN)) bob.y += 4 * bob.speed;

        LR::Window::draw([bob](){
            LR::Window::clearBackground(BLACK);

            DrawText(bob.face.c_str(), bob.x, bob.y, bob.size, bob.color);
        });
    }

    return 0;
}