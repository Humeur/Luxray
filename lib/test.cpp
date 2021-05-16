/*
** Luxray
** Github: https://github.com/Humeur
** Discord: Humeur#0001
*/

#include "test.hpp"
#include <vector>
#include <iostream>

class Wheel {
    public:
        size_t size;
        std::vector<std::string> elements;

        Wheel(size_t size, std::vector<std::string> elems) : size(size)
        {
            for (size_t i = 0 ; i < size ; ++i) {
                if (elems.size() < (i + 1)) {
                    this->elements.emplace_back("default");
                } else {
                    this->elements.emplace_back(elems[i]);
                }
            }
        };

        void addElement(const std::string &elem) {
            this->size += 1;

            this->elements.push_back(elem);
        }
};

Color getPartColor(size_t iterator)
{
    std::vector<Color> colors = {RED, BLUE, YELLOW, ORANGE, PINK, GREEN, PURPLE};

    return colors[iterator % colors.size()];
}

int main()
{
    LR::Window window;

    window.setTitle("Wheel of chance (or fortune) !")
            .setSize(window.getMonitorWidth(), window.getMonitorHeight())
            .setTargetFPS(60)
            .setPosition(0, 0)
            .setState(FLAG_WINDOW_RESIZABLE);

    LR::Cursor::disable();
    LR::Cursor::hide();

    Wheel wheel(5, {"1", "2", "3"});

    float sizePart = 0;
    long double rotate = 0;
    bool isRotating = false;

    int wheelSize = (float)window.getWidth() / 100;

    while (!window.shouldClose())
    {
        if (LR::Keyboard::isKeyDown(KEY_Z)) { wheel.addElement("default"); }
        if (LR::Keyboard::isKeyPressed(KEY_SPACE)) { isRotating = true; }

        sizePart = 360.0f / (float)wheel.size;

        if (isRotating) {
            rotate += 5;
        } else {
            rotate = 0;
        }

        wheelSize += (LR::Mouse::getWheelMove() * 50);

        LR::Window::draw([&window, &wheel, &sizePart, &rotate, isRotating, wheelSize]() {
            LR::Window::clearBackground(BLACK);

            for (size_t i = 0 ; i < wheel.size ; ++i) {
                LR::Shapes::drawCircleSector(
                        LR::Mouse::getPosition(),
                        wheelSize,
                        sizePart * i + rotate,
                        sizePart * (i + 1) + rotate,
                        0.1f,
                        getPartColor(i));
            }
        });
    }

    return 0;
}