/*
** Luxray
** Github: https://github.com/Humeur
** Discord: Humeur#0001
*/

#ifndef MODELS_HPP
#define MODELS_HPP

#include "raylib_inc.hpp"

namespace Luxray {
    class Models {
        public:
            Models() {}

            ~Models() {}

            // Draw a line in 3D world space
            static inline void drawLine3D(const Vector3 &startPos, const Vector3 &endPos, const Color &color) {
                ::DrawLine3D(startPos, endPos, color);
            }

            // Draw a point in 3D space, actually a small line
            static inline void drawPoint3D(const Vector3 &position, const Color &color) {
                ::DrawPoint3D(position, color);
            }

            // Draw a circle in 3D world space
            static inline void drawCircle3D(const Vector3 &center, const float &radius, const Vector3 &rotationAxis,
                                            const float &rotationAngle, const Color &color) {
                ::DrawCircle3D(center, radius, rotationAxis, rotationAngle, color);
            }

            // Draw a color-filled triangle (vertex in counter-clockwise order!)
            static inline void
            drawTriangle3D(const Vector3 &v1, const Vector3 &v2, const Vector3 &v3, const Color &color) {
                ::DrawTriangle3D(v1, v2, v3, color);
            }

            // Draw a triangle strip defined by points
            static inline void drawTriangleStrip3D(Vector3 *points, const int &pointsCount, const Color &color) {
                ::DrawTriangleStrip3D(points, pointsCount, color);
            }

            // Draw cube
            static inline void
            drawCube(const Vector3 &position, const float &width, const float &height, const float &length,
                     const Color &color) {
                ::DrawCube(position, width, height, length, color);
            }

            // Draw cube (Vector version)
            static inline void drawCube(const Vector3 &position, const Vector3 &size, const Color &color) {
                ::DrawCubeV(position, size, color);
            }

            // Draw cube wires
            static inline void
            drawCubeWires(const Vector3 &position, const float &width, const float &height, const float &length,
                          const Color &color) {
                ::DrawCubeWires(position, width, height, length, color);
            }

            // Draw cube wires (Vector version)
            static inline void drawCubeWires(const Vector3 &position, const Vector3 &size, const Color &color) {
                ::DrawCubeWiresV(position, size, color);
            }

            // Draw cube textured
            static inline void
            drawCubeTexture(const Texture2D &texture, const Vector3 &position, const float &width, const float &height,
                            const float &length, const Color &color) {
                ::DrawCubeTexture(texture, position, width, height, length, color);
            }

            // Draw sphere
            static inline void drawSphere(const Vector3 &centerPos, const float &radius, const Color &color) {
                ::DrawSphere(centerPos, radius, color);
            }

            // Draw sphere with extended parameters
            static inline void
            drawSphere(const Vector3 &centerPos, const float &radius, const int &rings, const int &slices,
                         const Color &color) {
                ::DrawSphereEx(centerPos, radius, rings, slices, color);
            }

            // Draw sphere wires
            static inline void
            drawSphereWires(const Vector3 &centerPos, const float &radius, const int &rings, const int &slices,
                            const Color &color) {
                ::DrawSphereWires(centerPos, radius, rings, slices, color);
            }

            // Draw a cylinder/cone
            static inline void drawCylinder(const Vector3 &position, const float &radiusTop, const float &radiusBottom,
                                            const float &height, const int &slices, const Color &color) {
                ::DrawCylinder(position, radiusTop, radiusBottom, height, slices, color);
            }

            // Draw a cylinder/cone wires
            static inline void
            drawCylinderWires(const Vector3 &position, const float &radiusTop, const float &radiusBottom,
                              const float &height, const int &slices, const Color &color) {
                ::DrawCylinderWires(position, radiusTop, radiusBottom, height, slices, color);
            }

            // Draw a plane XZ
            static inline void drawPlane(const Vector3 &centerPos, const Vector2 &size, const Color &color) {
                ::DrawPlane(centerPos, size, color);
            }

            // Draw a ray line
            static inline void drawRay(const Ray &ray, const Color &color) {
                ::DrawRay(ray, color);
            }

            // Draw a grid (centered at (0, 0, 0))
            static inline void drawGrid(const int &slices, const float &spacing) {
                ::DrawGrid(slices, spacing);
            }
    };
}

#endif