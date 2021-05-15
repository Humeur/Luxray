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
            static inline void drawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color) {
                ::DrawEllipse(centerX, centerY, radiusH, radiusV, color);
            }

            // Draw ellipse outline
            static inline void drawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color) {
                ::DrawEllipseLines(centerX, centerY, radiusH, radiusV, color);
            }

            // Draw ring
            static inline void drawRing(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color) {
                ::DrawRing(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
            }

            // Draw ring outline
            static inline void drawRing(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color) {
                ::DrawRingLines(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
            }

            // Draw a color-filled rectangle
            static inline void drawRectangle(int posX, int posY, int width, int height, Color color) {
                ::DrawRectangle(posX, posY, width, height, color);
            }

            // Draw a color-filled rectangle (Vector version)
            static inline void drawRectangle(Vector2 position, Vector2 size, Color color) {
                ::DrawRectangleV(position, size, color);
            }

            // Draw a color-filled rectangle
            static inline void drawRectangle(Rectangle rec, Color color) {
                ::DrawRectangleRec(rec, color);
            }

            // Draw a color-filled rectangle with pro parameters
            static inline void drawRectangle(Rectangle rec, Vector2 origin, float rotation, Color color) {
                ::DrawRectanglePro(rec, origin, rotation, color);
            }

            // Draw a vertical-gradient-filled rectangle
            static inline void drawRectangle(int posX, int posY, int width, int height, Color color1, Color color2) {
                ::DrawRectangleGradientV(posX, posY, width, height, color1, color2);
            }

            // Draw a horizontal-gradient-filled rectangle
            static inline void drawRectangle(int posX, int posY, int width, int height, Color color1, Color color2) {
                ::DrawRectangleGradientH(posX, posY, width, height, color1, color2);
            }

            // Draw a gradient-filled rectangle with custom vertex colors
            static inline void drawRectangle(Rectangle rec, Color col1, Color col2, Color col3, Color col4) {
                ::DrawRectangleGradientEx(rec, col1, col2, col3, col4);
            }

            // Draw rectangle outline
            static inline void drawRectangle(int posX, int posY, int width, int height, Color color) {
                ::DrawRectangleLines(posX, posY, width, height, color);
            }

            // Draw rectangle outline with extended parameters
            static inline void drawRectangle(Rectangle rec, int lineThick, Color color) {
                ::DrawRectangleLinesEx(rec, lineThick, color);
            }

            // Draw rectangle with rounded edges
            static inline void drawRectangle(Rectangle rec, float roundness, int segments, Color color) {
                ::DrawRectangleRounded(rec, roundness, segments, color);
            }

            // Draw rectangle with rounded edges outline
            static inline void drawRectangle(Rectangle rec, float roundness, int segments, int lineThick, Color color) {
                ::DrawRectangleRoundedLines(rec, roundness, segments, lineThick, color);
            }

            // Draw a color-filled triangle (vertex in counter-clockwise order!)
            static inline void drawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color) {
                ::DrawTriangle(v1, v2, v3, color);
            }

            // Draw triangle outline (vertex in counter-clockwise order!)
            static inline void drawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color) {
                ::DrawTriangleLines(v1, v2, v3, color);
            }

            // Draw a triangle fan defined by points (first vertex is the center)
            static inline void drawTriangle(Vector2 *points, int pointsCount, Color color) {
                ::DrawTriangleFan(points, pointsCount, color);
            }

            // Draw a triangle strip defined by points
            static inline void drawTriangle(Vector2 *points, int pointsCount, Color color) {
                ::DrawTriangleStrip(points, pointsCount, color);
            }

            // Draw a regular polygon (Vector version)
            static inline void drawPoly(Vector2 center, int sides, float radius, float rotation, Color color) {
                ::DrawPoly(center, sides, radius, rotation, color);
            }

            // Draw a polygon outline of n sides
            static inline void drawPoly(Vector2 center, int sides, float radius, float rotation, Color color) {
                ::DrawPolyLines(center, sides, radius, rotation, color);
            }

            // Check collision between two rectangles
            static inline bool checkCollision(Rectangle rec1, Rectangle rec2) {
                return ::CheckCollisionRecs(rec1, rec2);
            }

            // Check collision between two circles
            static inline bool checkCollision(Vector2 center1, float radius1, Vector2 center2, float radius2) {
                return ::CheckCollisionCircle(center1, radius1, center2, radius2);
            }

            // Check collision between circle and rectangle
            static inline bool checkCollision(Vector2 center, float radius, Rectangle rec) {
                return ::CheckCollisionCircleRec(center, radius, rec);
            }

            // Check if point is inside rectangle
            static inline bool checkCollision(Vector2 point, Rectangle rec) {
                return ::CheckCollisionPointRec(point, rec);
            }

            // Check if point is inside circle
            static inline bool checkCollision(Vector2 point, Vector2 center, float radius) {
                return ::CheckCollisionPointCircle(point, center, radius);
            }

            // Check if point is inside a triangle
            static inline bool checkCollision(Vector2 point, Vector2 p1, Vector2 p2, Vector2 p3) {
                return ::CheckCollisionPointTriangle(point, p1, p2, p3);
            }

            // Check the collision between two lines defined by two points each, returns collision point by reference
            static inline bool checkCollision(Vector2 startPos1, Vector2 endPos1, Vector2 startPos2, Vector2 endPos2, Vector2 *collisionPoint) {
                return ::CheckCollisionLines(startPos1, endPos1, startPos2, endPos2, collisionPoint);
            }

            // Get collision rectangle for two rectangles collision
            static inline Rectangle getCollision(Rectangle rec1, Rectangle rec2) {
                return ::GetCollisionRec(rec1, rec2);
            }
    };
}


#endif