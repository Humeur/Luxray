/*
** Luxray
** Github: https://github.com/Humeur
** Discord: Humeur#0001
*/

#include "test.hpp"

int main()
{
    LR::Window window(1920, 1080, "Test");

    window.setPosition(0,0)
            .setClipboard("Test123");

    SetTargetFPS(60);

    while (!window.shouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        EndDrawing();
    }

    return 0;
}