/*
** Luxray
** Github: https://github.com/Humeur
** Discord: Humeur#0001
*/

#ifndef SHAPES_HPP
#define SHAPES_HPP

#include "raylib_inc.hpp"

namespace Luxray {
    class Shapes {
        public:
            Shapes() {}

            ~Shapes() {}

            // Set texture and rectangle to be used on shapes drawing
            // NOTE: It can be useful when using basic shapes and one single font,
            // defining a font char white rectangle would allow drawing everything in a single draw call
            static inline void setShapesTexture(const Texture2D &texture, const Rectangle &source) {
                ::SetShapesTexture(texture, source);
            }

            // Draw a pixel
            static inline void drawPixel(const int &posX, const int &posY, const Color &color) {
                ::DrawPixel(posX, posY, color);
            }

            // Draw a pixel (Vector version)
            static inline void drawPixel(const Vector2 &position, const Color &color) {
                ::DrawPixelV(position, color);
            }

            // Draw a line
            static inline void drawLine(const int &startPosX, const int &startPosY,
                                        const int &endPosX, const int &endPosY, const Color &color) {
                ::DrawLine(startPosX, startPosY, endPosX, endPosY, color);
            }

            // Draw a line (Vector version)
            static inline void drawLine(const Vector2 &startPos, const Vector2 &endPos, const Color &color) {
                ::DrawLineV(startPos, endPos, color);
            }

            // Draw a line defining thickness
            static inline void drawLine(const Vector2 &startPos, const Vector2 &endPos, const float &thick, const Color &color) {
                ::DrawLineEx(startPos, endPos, thick, color);
            }

            // Draw a line using cubic-bezier curves in-out
            static inline void drawLineBezier(const Vector2 &startPos, const Vector2 &endPos, const float &thick, const Color &color) {
                ::DrawLineBezier(startPos, endPos, thick, color);
            }

            //Draw line using quadratic bezier curves with a control point
            static inline void drawLineBezierQuad(const Vector2 &startPos, const Vector2 &endPos, const Vector2 &controlPos, const float &thick, const Color &color) {
                ::DrawLineBezierQuad(startPos, endPos, controlPos, thick, color);
            }

            // Draw lines sequence
            static inline void drawLineStrip(Vector2 *points, const int &pointsCount, const Color &color) {
                ::DrawLineStrip(points, pointsCount, color);
            }

            // Draw a color-filled circle
            static inline void drawCircle(const int &centerX, const int &centerY, const float &radius, const Color &color) {
                ::DrawCircle(centerX, centerY, radius, color);
            }

            // Draw a piece of a circle
            static inline void drawCircleSector(const Vector2 &center, const float &radius, const float &startAngle, const float &endAngle, const int &segments, const Color &color) {
                ::DrawCircleSector(center, radius, startAngle, endAngle, segments, color);
            }

            // Draw circle sector outline
            static inline void drawCircleSectorLines(const Vector2 &center, const float &radius, const float &startAngle, const float &endAngle, const int &segments, const Color &color) {
                ::DrawCircleSectorLines(center, radius, startAngle, endAngle, segments, color);
            }

            // Draw a gradient-filled circle
            static inline void drawCircle(const int &centerX, const int &centerY, const float &radius, const Color &color1, const Color &color2) {
                ::DrawCircleGradient(centerX, centerY, radius, color1, color2);
            }

            // Draw a color-filled circle (Vector version)
            static inline void drawCircle(const Vector2 &center, const float &radius, const Color &color) {
                ::DrawCircleV(center, radius, color);
            }

            // Draw circle outline
            static inline void drawCircleLines(const int &centerX, const int &centerY, const float &radius, const Color &color) {
                ::DrawCircleLines(centerX, centerY, radius, color);
            }

            // Draw ellipse
            static inline void drawEllipse(const int &centerX, const int &centerY, const float &radiusH, const float &radiusV, const Color &color) {
                ::DrawEllipse(centerX, centerY, radiusH, radiusV, color);
            }

            // Draw ellipse outline
            static inline void drawEllipseLines(const int &centerX, const int &centerY, const float &radiusH, const float &radiusV, const Color &color) {
                ::DrawEllipseLines(centerX, centerY, radiusH, radiusV, color);
            }

            // Draw ring
            static inline void drawRing(const Vector2 &center, const float &innerRadius, const float &outerRadius, const float &startAngle, const float &endAngle, const int &segments, const Color &color) {
                ::DrawRing(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
            }

            // Draw ring outline
            static inline void drawRingLines(const Vector2 &center, float innerRadius, float outerRadius, float startAngle, float endAngle, const int &segments, const Color &color) {
                ::DrawRingLines(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
            }

            // Draw a color-filled rectangle
            static inline void drawRectangle(const int &posX, const int &posY, const int &width, const int &height, const Color &color) {
                ::DrawRectangle(posX, posY, width, height, color);
            }

            // Draw a color-filled rectangle (Vector version)
            static inline void drawRectangle(const Vector2 &position, const Vector2 &size, const Color &color) {
                ::DrawRectangleV(position, size, color);
            }

            // Draw a color-filled rectangle
            static inline void drawRectangle(const Rectangle &rec, const Color &color) {
                ::DrawRectangleRec(rec, color);
            }

            // Draw a color-filled rectangle with pro parameters
            static inline void drawRectangle(const Rectangle &rec, const Vector2 &origin, float rotation, const Color &color) {
                ::DrawRectanglePro(rec, origin, rotation, color);
            }

            // Draw a vertical-gradient-filled rectangle
            static inline void drawRectangleGradientV(const int &posX, const int &posY, const int &width, const int &height, const Color &color1, const Color &color2) {
                ::DrawRectangleGradientV(posX, posY, width, height, color1, color2);
            }

            // Draw a horizontal-gradient-filled rectangle
            static inline void drawRectangleGradientH(const int &posX, const int &posY, const int &width, const int &height, const Color &color1, const Color &color2) {
                ::DrawRectangleGradientH(posX, posY, width, height, color1, color2);
            }

            // Draw a gradient-filled rectangle with custom vertex colors
            static inline void drawRectangleEx(const Rectangle &rec, const Color &col1, Color col2, Color col3, Color col4) {
                ::DrawRectangleGradientEx(rec, col1, col2, col3, col4);
            }

            // Draw rectangle outline
            static inline void drawRectangleLines(const int &posX, const int &posY, const int &width, const int &height, const Color &color) {
                ::DrawRectangleLines(posX, posY, width, height, color);
            }

            // Draw rectangle outline with extended parameters
            static inline void drawRectangleLines(const Rectangle &rec, const int &lineThick, const Color &color) {
                ::DrawRectangleLinesEx(rec, lineThick, color);
            }

            // Draw rectangle with rounded edges
            static inline void drawRectangleLines(const Rectangle &rec, float roundness, const int &segments, const Color &color) {
                ::DrawRectangleRounded(rec, roundness, segments, color);
            }

            // Draw rectangle with rounded edges outline
            static inline void drawRectangle(const Rectangle &rec, float roundness, const int &segments, const int &lineThick, const Color &color) {
                ::DrawRectangleRoundedLines(rec, roundness, segments, lineThick, color);
            }

            // Draw a color-filled triangle (vertex in counter-clockwise order!)
            static inline void drawTriangle(const Vector2 &v1, const Vector2 &v2, const Vector2 &v3, const Color &color) {
                ::DrawTriangle(v1, v2, v3, color);
            }

            // Draw triangle outline (vertex in counter-clockwise order!)
            static inline void drawTriangleLines(const Vector2 &v1, const Vector2 &v2, const Vector2 &v3, const Color &color) {
                ::DrawTriangleLines(v1, v2, v3, color);
            }

            // Draw a triangle fan defined by points (first vertex is the center)
            static inline void drawTriangleFan(Vector2 *points, const int &pointsCount, const Color &color) {
                ::DrawTriangleFan(points, pointsCount, color);
            }

            // Draw a triangle strip defined by points
            static inline void drawTriangleStrip(Vector2 *points, const int &pointsCount, const Color &color) {
                ::DrawTriangleStrip(points, pointsCount, color);
            }

            // Draw a regular polygon (Vector version)
            static inline void drawPoly(const Vector2 &center, const int &sides, const float &radius, const float &rotation, const Color &color) {
                ::DrawPoly(center, sides, radius, rotation, color);
            }

            // Draw a polygon outline of n sides
            static inline void drawPolyLines(const Vector2 &center, const int &sides, const float &radius, const float &rotation, const Color &color) {
                ::DrawPolyLines(center, sides, radius, rotation, color);
            }

            // Check collision between two rectangles
            static inline bool checkCollision(const Rectangle &rec1, const Rectangle &rec2) {
                return ::CheckCollisionRecs(rec1, rec2);
            }

            // Check collision between two circles
            static inline bool checkCollision(const Vector2 &center1, const float &radius1, const Vector2 &center2, const float &radius2) {
                return ::CheckCollisionCircles(center1, radius1, center2, radius2);
            }

            // Check collision between circle and rectangle
            static inline bool checkCollision(const Vector2 &center, const float &radius, const Rectangle &rec) {
                return ::CheckCollisionCircleRec(center, radius, rec);
            }

            // Check if point is inside rectangle
            static inline bool checkCollision(const Vector2 &point, const Rectangle &rec) {
                return ::CheckCollisionPointRec(point, rec);
            }

            // Check if point is inside circle
            static inline bool checkCollision(const Vector2 &point, const Vector2 &center, float radius) {
                return ::CheckCollisionPointCircle(point, center, radius);
            }

            // Check if point is inside a triangle
            static inline bool checkCollision(const Vector2 &point, const Vector2 &p1, const Vector2 &p2, const Vector2 &p3) {
                return ::CheckCollisionPointTriangle(point, p1, p2, p3);
            }

            // Check the collision between two lines defined by two points each, returns collision point by reference
            static inline bool checkCollision(const Vector2 &startPos1, const Vector2 &endPos1, const Vector2 &startPos2, const Vector2 &endPos2, Vector2 *collisionPoint) {
                return ::CheckCollisionLines(startPos1, endPos1, startPos2, endPos2, collisionPoint);
            }

            // Get collision rectangle for two rectangles collision
            static inline Rectangle getCollision(const Rectangle &rec1, const Rectangle &rec2) {
                return ::GetCollisionRec(rec1, rec2);
            }

            /*
            * Added functions
            */

            // Draw a vertical-gradient-filled if horizontal is false otherwise a horizontal-gradient-filled rectangle
            static inline void drawRectangle(const int &posX, const int &posY, const int &width, const int &height, const Color &color1, const Color &color2, const bool &horizontal) {
                if (horizontal) {
                    ::DrawRectangleGradientH(posX, posY, width, height, color1, color2);
                } else {
                    ::DrawRectangleGradientV(posX, posY, width, height, color1, color2);
                }
            }

            static inline void drawRectangle(const Rectangle &rec, const Color &col1, const Color &col2, const Color &col3, const Color &col4) {
                ::DrawRectangleGradientEx(rec, col1, col2, col3, col4);
            }
    };
}

#endif