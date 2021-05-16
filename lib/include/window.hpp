/*
** Luxray
** Github: https://github.com/Humeur
** Discord: Humeur#0001
*/

#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <iostream>
#include <functional>

#include "raylib_inc.hpp"

namespace Luxray {
    class Window {
        private:
            int width;
            int height;

            const std::string title;
        public:
            // Initialize window and OpenGL context
            Window(const int &width = 1920,
                   const int & height = 1080,
                   const std::string &title = "Default Window")
                   : width(width), height(height), title(title) {
                ::InitWindow(width, height, title.c_str());
            }
            // Close window and unload OpenGL context
            ~Window() {
                this->close();
            }

            Window &close() {
                ::CloseWindow();
                return *this;
            }

            // Check if KEY_ESCAPE pressed or Close icon pressed
            inline bool shouldClose() {
                return ::WindowShouldClose();
            }

            // Check if window has been initialized successfully
            inline bool isReady() {
                return ::IsWindowReady();
            }

            // Check if window is currently fullscreen
            inline bool isFullscreen() {
                return ::IsWindowFullscreen();
            }

            // Check if window is currently hidden (only PLATFORM_DESKTOP)
            inline bool isHidden() {
                return ::IsWindowHidden();
            }

            // Check if window is currently minimized (only PLATFORM_DESKTOP)
            inline bool isMinimized() {
                return ::IsWindowMinimized();
            }

            // Check if window is currently maximized (only PLATFORM_DESKTOP)
            inline bool isMaximized() {
                return ::IsWindowMaximized();
            }

            // Check if window is currently focused (only PLATFORM_DESKTOP)
            inline bool isFocused() {
                return ::IsWindowFocused();
            }

            // Check if window has been resized last frame
            inline bool isResized() {
                return ::IsWindowResized();
            }

            // Check if one specific window flag is enabled
            inline bool haveState(const unsigned int &flag) {
                return ::IsWindowState(flag);
            }

            // Set window configuration state using flags
            inline Window &setState(const unsigned int &flag) {
                ::SetWindowState(flag);
                return *this;
            }

            // Clear window configuration state flags
            inline Window &clearState(const unsigned int &flags) {
                ::ClearWindowState(flags);
                return *this;
            }

            // Toggle window state: fullscreen/windowed (only PLATFORM_DESKTOP)
            inline Window &toggleFullscreen() {
                ::ToggleFullscreen();
                return *this;
            }

            // Set window state: maximized, if resizable (only PLATFORM_DESKTOP)
            inline Window &maximize() {
                ::MaximizeWindow();
                return *this;
            }

            // Set window state: minimized, if resizable (only PLATFORM_DESKTOP)
            inline Window &minimize() {
                ::MinimizeWindow();
                return *this;
            }

            // Set window state: not minimized/maximized (only PLATFORM_DESKTOP)
            inline Window &restore() {
                ::RestoreWindow();
                return *this;
            }

            // Set icon for window (only PLATFORM_DESKTOP)
            inline Window &setIcon(const Image &image) {
                //TODO replace Image by a Luxray object image
                ::SetWindowIcon(image);
                return *this;
            }

            // Set title for window (only PLATFORM_DESKTOP)
            inline Window &setTitle(const std::string &title) {
                ::SetWindowTitle(title.c_str());
                return *this;
            }

            // Set window position on screen (only PLATFORM_DESKTOP)
            inline Window &setPosition(const int &x, const int &y) {
                ::SetWindowPosition(x, y);
                return *this;
            }

            // Set monitor for the current window (fullscreen mode)
            inline Window &setMonitor(const int &monitor) {
                ::SetWindowMonitor(monitor);
                return *this;
            }

            // Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE)
            inline Window &setMinSize(const int &width, const int &height) {
                ::SetWindowMinSize(width, height);
                return *this;
            }

            // Set window dimensions
            inline Window &setSize(const int &width, const int &height) {
                this->width = width;
                this->height = height;
                ::SetWindowSize(width, height);
                return *this;
            }

            // Get native window handle
            inline void *getHandle() {
                return ::GetWindowHandle();
            }

            // Get current screen width
            inline int getScreenWidth() {
                return ::GetScreenWidth();
            }

            // Get current screen height
            inline int getScreenHeight() {
                return ::GetScreenHeight();
            }

            // Get number of connected monitors
            inline int getMonitorCount() {
                return ::GetMonitorCount();
            }

            // Get current connected monitor
            inline int getCurrentMonitor() {
                return ::GetCurrentMonitor();
            }

            // Get specified monitor position
            inline Vector2 getMonitorPosition(const int &monitor) {
                //TODO replace Vector2 by Luxray object Vector2
                return ::GetMonitorPosition(monitor);
            }

            // Get specified monitor width (max available by monitor)
            inline int getMonitorWidth(const int &monitor) {
                return ::GetMonitorWidth(monitor);
            }

            // Get specified monitor height (max available by monitor)
            inline int getMonitorHeight(const int &monitor) {
                return ::GetMonitorHeight(monitor);
            }

            // Get specified monitor physical width in millimetres
            inline int getMonitorPhysicalWidth(const int &monitor) {
                return ::GetMonitorPhysicalWidth(monitor);
            }

            // Get specified monitor physical height in millimetres
            inline int getMonitorPhysicalHeight(const int &monitor) {
                return ::GetMonitorPhysicalHeight(monitor);
            }

            // Get specified monitor refresh rate
            inline int getMonitorRefreshRate(const int &monitor) {
                return ::GetMonitorRefreshRate(monitor);
            }

            // Get window position XY on monitor
            inline Vector2 getPosition() {
                //TODO replace Vector2 by Luxray object Vector2
                return ::GetWindowPosition();
            }

            // Get window scale DPI factor
            inline Vector2 getScaleDPI() {
                return ::GetWindowScaleDPI();
            }

            // Get the human-readable, UTF-8 encoded name of the primary monitor
            inline const std::string getMonitorName(const int &monitor) {
                const std::string monitorName(::GetMonitorName(monitor));
                return monitorName;
            }

            // Set clipboard text content
            inline Window &setClipboard(const std::string &text) {
                ::SetClipboardText(text.c_str());
                return *this;
            }

            // Get clipboard text content
            inline const std::string getClipboard() {
                const std::string clipboard(::GetClipboardText());
                return clipboard;
            }

            // Set target FPS (maximum)
            inline Window &setTargetFPS(const int &fps) {
                ::SetTargetFPS(fps);
                return *this;
            }

            // Returns current FPS
            inline int getFPS() {
                return ::GetFPS();
            }

            // Returns time in seconds for last frame drawn (delta time)
            inline float getFrameTime() {
                return ::GetFrameTime();
            }

            // Returns elapsed time in seconds since InitWindow()
            inline double getTime() {
                return ::GetTime();
            }

            // Set background color (framebuffer clear color)
            static inline void clearBackground(const Color &color = WHITE) {
                ::ClearBackground(color);
            }

            // Setup canvas (framebuffer) to start drawing
            static inline void beginDrawing() {
                ::BeginDrawing();
            }

            // End canvas drawing and swap buffers (double buffering)
            static inline void endDrawing() {
                ::EndDrawing();
            }

            // Initialize 2D mode with custom camera (2D)
            static inline void beginMode2D(const Camera2D &camera) {
                ::BeginMode2D(camera);
            }

            // Ends 2D mode with custom camera
            static inline void endMode2D() {
                ::EndMode2D();
            }

            // Initializes 3D mode with custom camera (3D)
            static inline void beginMode3D(const Camera3D &camera) {
                ::BeginMode3D(camera);
            }

            // Ends 3D mode and returns to default 2D orthographic mode
            static inline void endMode3D() {
                ::EndMode3D();
            }

            // Initializes render texture for drawing
            static inline void beginTextureMode(const RenderTexture2D &target) {
                ::BeginTextureMode(target);
            }

            // Ends drawing to render texture
            static inline void endTextureMode() {
                ::EndTextureMode();
            }

            // Begin custom shader drawing
            static inline void beginShaderMode(const Shader &shader) {
                ::BeginShaderMode(shader);
            }

            // End custom shader drawing (use default shader)
            static inline void endShaderMode() {
                ::EndShaderMode();
            }

            // Begin blending mode (alpha, additive, multiplied)
            static inline void beginBlendMode(const int &mode) {
                ::BeginBlendMode(mode);
            }

            // End blending mode (reset to default: alpha blending)
            static inline void endBlendMode() {
                ::EndBlendMode();
            }

            // Begin scissor mode (define screen area for following drawing)
            static inline void beginScissorMode(const int &x, const int &y, const int &width, const int &height) {
                ::BeginScissorMode(x, y, width, height);
            }

            // End scissor mode
            static inline void endScissorMode() {
                ::EndScissorMode();
            }

            // Begin stereo rendering
            static inline void beginVrStereoMode(VrStereoConfig config) {
                ::BeginVrStereoMode(config);
            }

            // End stereo rendering
            static inline void endVrStereoMode() {
                ::EndVrStereoMode();
            }

            /*
             * Added functions
             */

            // Get window width
            inline const int &getWidth() const {
                return this->width;
            }

            //Get window height
            inline const int &getHeight() const {
                return this->height;
            }

            //Get window title
            inline const std::string &getTitle() const {
                return this->title;
            }

            //override of the getMonitorWidth function, return the current monitor width
            inline int getMonitorWidth() {
                return this->getMonitorWidth(this->getCurrentMonitor());
            }

            //override of the getMonitorHeight function, return the current monitor height
            inline int getMonitorHeight() {
                return this->getMonitorHeight(this->getCurrentMonitor());
            }

            //override of the getMonitorRefreshRate function, return the current monitor refresh rate
            inline int getMonitorRefreshRate() {
                return this->getMonitorRefreshRate(this->getCurrentMonitor());
            }

            //override of the getMonitorName function, return the current monitor name
            inline const std::string getMonitorName() {
                return this->getMonitorName(this->getCurrentMonitor());
            }

            //trigger beginDrawing then fun then end drawing, a all in one drawing function
            static inline void draw(const std::function<void()> &fun) {
                Window::beginDrawing();
                fun();
                Window::endDrawing();
            }

            //trigger beginMode2D then fun then endMode2D, a all in one mode2D function
            static inline void mode2D(const Camera2D &camera, const std::function<void()> &fun) {
                Window::beginMode2D(camera);
                fun();
                Window::endMode2D();
            }

            //trigger beginMode3D then fun then endMode3D, a all in one mode3D function
            static inline void mode3D(const Camera3D &camera, const std::function<void()> &fun) {
                Window::beginMode3D(camera);
                fun();
                Window::endMode3D();
            }

            //trigger beginTextureMode then fun then endTextureMode, a all in one textureMode function
            static inline void textureMode(const RenderTexture2D &target, const std::function<void()> &fun) {
                Window::beginTextureMode(target);
                fun();
                Window::endTextureMode();
            }

            //trigger beginShaderMode then fun then endShaderMode, a all in one shaderMode function
            static inline void shaderMode(const Shader &shader, const std::function<void()> &fun) {
                Window::beginShaderMode(shader);
                fun();
                Window::endShaderMode();
            }

            //trigger beginBlendMode then fun then endBlendMode, a all in blendMode function
            static inline void blendMode(const int &mode, const std::function<void()> &fun) {
                Window::beginBlendMode(mode);
                fun();
                Window::endBlendMode();
            }

            //trigger beginScissorMode then fun then endScissorMode, a all in one scissorMode function
            static inline void scissorMode(const int &x, const int &y, const int &width, const int &height, const std::function<void()> &fun) {
                Window::beginScissorMode(x, y, width, height);
                fun();
                Window::endScissorMode();
            }

            //trigger beginVrStereoMode then fun then endVrStereoMode, a all in one drawing function
            static inline void vrStereoMode(const VrStereoConfig &config, const std::function<void()> &fun) {
                Window::beginVrStereoMode(config);
                fun();
                Window::endVrStereoMode();
            }
    };
}

#endif