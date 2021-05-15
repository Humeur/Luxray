/*
** Luxray
** Github: https://github.com/Humeur
** Discord: Humeur#0001
*/

#ifndef CURSOR_HPP
#define CURSOR_HPP

#include "raylib_inc.hpp"

namespace Luxray {
    class Shapes {
        public:
            Shapes() {}

            ~Shapes() {}

            // Draw a pixel
            static inline void drawPixel(int posX, int posY, Color color = BLACK) {
                ::DrawPixel(posX, posY, color);
            }

            // Draw a pixel (Vector version)
            static inline void drawPixel(Vector2 position, Color color = BLACK) {
                ::DrawPixelV(position, color);
            }

            // Draw a line
            static inline void drawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color color = BLACK) {
                ::DrawLine(startPosX, startPosY, endPosX, endPosY, color);
            }

            // Draw a line (Vector version)
            static inline void drawLine(Vector2 startPos, Vector2 endPos, Color color = BLACK) {
                ::DrawLineV(startPos, endPos, color);
            }

            // Draw a line defining thickness
            static inline void drawLine(Vector2 startPos, Vector2 endPos, float thick, Color color = BLACK) {
                ::DrawLineEx(startPos, endPos, thick, color);
            }

            // Draw a line using cubic-bezier curves in-out
            static inline void drawLine(Vector2 startPos, Vector2 endPos, float thick, Color color = BLACK) {
                ::DrawLineBezier(startPos, endPos, thick, color);
            }

            //Draw line using quadratic bezier curves with a control point
            static inline void drawLine(Vector2 startPos, Vector2 endPos, Vector2 controlPos, float thick, Color color = BLACK) {
                ::DrawLineBezierQuad(startPos, endPos, controlPos, thick, color);
            }

            // Draw lines sequence
            static inline void drawLine(Vector2 *points, int pointsCount, Color color = BLACK) {
                ::DrawLineStrip(points, pointsCount, color);
            }
    };
}


#endif