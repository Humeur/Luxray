/*
** Luxray
** Github: https://github.com/Humeur
** Discord: Humeur#0001
*/

#include "test.hpp"
#include <vector>
#include <iostream>

int main()
{
    LR::Window window;
    window.setSize(window.getMonitorWidth(),
                   window.getMonitorHeight())
          .setTitle("Luxray is cool, but raylib is amazing")
          .setTargetFPS(60)
          .setState(FLAG_WINDOW_RESIZABLE);

    Camera3D camera;
    camera.position = (Vector3){ 0.0f, 10.0f, 10.0f };
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
    camera.fovy = 45.0f;
    camera.projection = CAMERA_PERSPECTIVE;

    Vector3 cubePosition = { 0.0f, 0.0f, 0.0f };

    while (!window.shouldClose())
    {
        LR::Window::draw([cubePosition, camera]() {
            LR::Window::clearBackground();

            LR::Window::mode3D(camera, [cubePosition]() {
                LR::Models::drawCube(cubePosition, 2.0f, 2.0f, 2.0f, RED);
                LR::Models::drawCubeWires(cubePosition, 2.0f, 2.0f, 2.0f, MAROON);

                LR::Models::drawGrid(10, 1.0f);
            });


        });
    }

    return 0;
}