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

            // Set texture and rectangle to be used on shapes drawing
            // NOTE: It can be useful when using basic shapes and one single font,
            // defining a font char white rectangle would allow drawing everything in a single draw call
            static inline void setShapesTexture(Texture2D texture, Rectangle source) {
                ::SetShapesTexture(texture, source);
            }

            // Draw a pixel
            static inline void drawPixel(int posX, int posY, Color color) {
                ::DrawPixel(posX, posY, color);
            }

            // Draw a pixel (Vector version)
            static inline void drawPixel(Vector2 position, Color color) {
                ::DrawPixelV(position, color);
            }

            // Draw a line
            static inline void drawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color color) {
                ::DrawLine(startPosX, startPosY, endPosX, endPosY, color);
            }

            // Draw a line (Vector version)
            static inline void drawLine(Vector2 startPos, Vector2 endPos, Color color) {
                ::DrawLineV(startPos, endPos, color);
            }

            // Draw a line defining thickness
            static inline void drawLine(Vector2 startPos, Vector2 endPos, float thick, Color color) {
                ::DrawLineEx(startPos, endPos, thick, color);
            }

            // Draw a line using cubic-bezier curves in-out
            static inline void drawLine(Vector2 startPos, Vector2 endPos, float thick, Color color) {
                ::DrawLineBezier(startPos, endPos, thick, color);
            }

            //Draw line using quadratic bezier curves with a control point
            static inline void drawLine(Vector2 startPos, Vector2 endPos, Vector2 controlPos, float thick, Color color) {
                ::DrawLineBezierQuad(startPos, endPos, controlPos, thick, color);
            }

            // Draw lines sequence
            static inline void drawLine(Vector2 *points, int pointsCount, Color color) {
                ::DrawLineStrip(points, pointsCount, color);
            }

            // Draw a color-filled circle
            static inline void drawCircle(int centerX, int centerY, float radius, Color color) {
                ::DrawCircle(centerX, centerY, radius, color)
            }

            // Draw a piece of a circle
            static inline void drawCircle(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color) {
                ::DrawCircleSector(center, radius, startAngle, endAngle, segments, color)
            }

            // Draw circle sector outline
            static inline void drawCircle(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color) {
                ::DrawCircleSectorLines(center, radius, startAngle, endAngle, segments, color)
            }

            // Draw a gradient-filled circle
            static inline void drawCircle(int centerX, int centerY, float radius, Color color1, Color color2) {
                ::DrawCircleGradient(centerX, centerY, radius, color1, color2);
            }

            // Draw a color-filled circle (Vector version)
            static inline void drawCircle(Vector2 center, float radius, Color color) {
                ::DrawCircleV(center, radius, color);
            }

            // Draw circle outline
            static inline void drawCircle(int centerX, int centerY, float radius, Color color) {
                ::DrawCircleLines(centerX, centerY, radius, color);
            }

            // Draw ellipse
            static inline void DrawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color) {
                ::DrawEllipse(centerX, centerY, radiusH, radiusV, color);
            }

            // Draw ellipse outline
            static inline void DrawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color) {
                ::DrawEllipseLines(centerX, centerY, radiusH, radiusV, color);
            }
    };
}


#endif