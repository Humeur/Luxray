/*
** Luxray
** Github: https://github.com/Humeur
** Discord: Humeur#0001
*/

#ifndef CURSOR_HPP
#define CURSOR_HPP

#include "raylib_inc.hpp"

class Cursor {
    public:
        Cursor() {}
        ~Cursor() {}

        // Shows cursor
        inline Cursor &show() {
            ::ShowCursor();
            return *this;
        }

        // Hides cursor
        inline Cursor &hide() {
            ::HideCursor();
            return *this;
        }

        // Check if cursor is not visible
        inline bool isHidden() {
            return ::IsCursorHidden();
        }

        // Enables cursor (unlock cursor)
        inline Cursor &enable() {
            ::EnableCursor();
            return *this;
        }

        // Disables cursor (lock cursor)
        inline Cursor &disable() {
            ::DisableCursor();
            return *this;
        }

        // Check if cursor is on the current screen.
        inline bool isOnScreen() {
            return ::IsCursorOnScreen();
        }
};


#endif