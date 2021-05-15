/*
** Luxray
** Github: https://github.com/Humeur
** Discord: Humeur#0001
*/

#ifndef KEYBOARD_HPP
#define KEYBOARD_HPP

#include "raylib_inc.hpp"

class Keyboard {
    public:
        Keyboard() {}
        ~Keyboard() {}

        // Detect if a key has been pressed once
        static inline bool isKeyPressed(int key) {
            return ::IsKeyPressed(key);
        }

        // Detect if a key is being pressed
        static inline bool isKeyDown(int key) {
            return ::IsKeyDown(key);
        }

        // Detect if a key has been released once
        static inline bool isKeyReleased(int key) {
            return ::IsKeyReleased(key);
        }

        // Detect if a key is NOT being pressed
        static inline bool isKeyUp(int key) {
            return ::IsKeyUp(key);
        }

        // Set a custom key to exit program (default is ESC)
        static inline void setExitKey(int key) {
            ::SetExitKey(key);
        }

        // Get key pressed (keycode), call it multiple times for keys queued
        static inline int getKeyPressed() {
            return ::GetKeyPressed();
        }

        // Get char pressed (unicode), call it multiple times for chars queued
        static inline int getCharPressed() {
            return ::GetCharPressed();
        }
};

#endif