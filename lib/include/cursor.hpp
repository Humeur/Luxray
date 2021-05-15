/*
** Luxray
** Github: https://github.com/Humeur
** Discord: Humeur#0001
*/

#ifndef CURSOR_HPP
#define CURSOR_HPP

#include "raylib_inc.hpp"

namespace Luxray {
    class Cursor {
        public:
            Cursor() {}
            ~Cursor() {}

            // Shows cursor
            static inline void show() {
                ::ShowCursor();
            }

            // Hides cursor
            static inline void hide() {
                ::HideCursor();
            }

            // Check if cursor is not visible
            static inline bool isHidden() {
                return ::IsCursorHidden();
            }

            // Enables cursor (unlock cursor)
            static inline void enable() {
                ::EnableCursor();
            }

            // Disables cursor (lock cursor)
            static inline void disable() {
                ::DisableCursor();
            }

            // Check if cursor is on the current screen.
            static inline bool isOnScreen() {
                return ::IsCursorOnScreen();
            }
    };
}


#endif