/*
** Luxray
** Github: https://github.com/Humeur
** Discord: Humeur#0001
*/

#ifndef MOUSE_HPP
#define MOUSE_HPP

#include "raylib_inc.hpp"

namespace Luxray {
    class Mouse {
        public:
            Mouse() {}

            ~Mouse() {}

            // Detect if a mouse button has been pressed once
            static inline bool isButtonPressed(const int &button) {
                return ::IsMouseButtonPressed(button);
            }

            // Detect if a mouse button is being pressed
            static inline bool isButtonDown(const int &button) {
                return ::IsMouseButtonDown(button);
            }

            // Detect if a mouse button has been released once
            static inline bool isButtonReleased(const int &button) {
                return ::IsMouseButtonReleased(button);
            }

            // Detect if a mouse button is NOT being pressed
            static inline bool isButtonUp(const int &button) {
                return ::IsMouseButtonUp(button);
            }

            // Returns mouse position X
            static inline int getX() {
                return ::GetMouseX();
            }

            // Returns mouse position Y
            static inline int getY() {
                return ::GetMouseY();
            }

            // Returns mouse position XY
            static inline Vector2 getPosition() {
                return ::GetMousePosition();
            }

            // Set mouse position XY
            static inline void setPosition(const int &x, const int &y) {
                return ::SetMousePosition(x, y);
            }

            // Set mouse offset
            static inline void setOffset(const int &offsetX, const int &offsetY) {
                return ::SetMouseOffset(offsetX, offsetY);
            }

            // Set mouse scaling
            static inline void setScale(const float &scaleX, const float &scaleY) {
                return ::SetMouseScale(scaleX, scaleY);
            }

            // Returns mouse wheel movement Y
            static inline float getWheelMove() {
                return ::GetMouseWheelMove();
            }

            // Set mouse cursor
            static inline void setCursor(const int &cursor) {
                return ::SetMouseCursor(cursor);
            }

            /*
            * Added functions
            */

            //Todo add getMousePressedTime (something like that)
    };
}

#endif