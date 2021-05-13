/*
** Luxray
** Github: https://github.com/Humeur
** Discord: Humeur#0001
*/

#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <iostream>

#include "raylib_inc.hpp"

namespace Luxray {
    class Window {
        private:
            int width;
            int height;

            const std::string title;
        public:
            // Initialize window and OpenGL context
            Window(int width = 1920,
                   int height = 1080,
                   const std::string title = "Default Window")
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
            inline bool haveState(unsigned int flag) {
                return ::IsWindowState(flag);
            }

            // Set window configuration state using flags
            inline Window &setState(unsigned int flag) {
                ::SetWindowState(flag);
                return *this;
            }

            // Clear window configuration state flags
            inline Window &clearState(unsigned int flags) {
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
            inline Window &setIcon(Image image) {
                //TODO replace Image by a Luxray object image
                ::SetWindowIcon(image);
                return *this;
            }

            // Set title for window (only PLATFORM_DESKTOP)
            inline Window &setTitle(const std::string title) {
                ::SetWindowTitle(title.c_str());
                return *this;
            }

            // Set window position on screen (only PLATFORM_DESKTOP)
            inline Window &setPosition(int x, int y) {
                ::SetWindowPosition(x, y);
                return *this;
            }

            // Set monitor for the current window (fullscreen mode)
            inline Window &setMonitor(int monitor) {
                ::SetWindowMonitor(monitor);
                return *this;
            }

            // Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE)
            inline Window &setMinSize(int width, int height) {
                ::SetWindowMinSize(width, height);
                return *this;
            }

            // Set window dimensions
            inline Window &setSize(int width, int height) {
                ::SetWindowMinSize(width, height);
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
            inline Vector2 getMonitorPosition(int monitor) {
                //TODO replace Vector2 by Luxray object Vector2
                return ::GetMonitorPosition(monitor);
            }

            // Get specified monitor width (max available by monitor)
            inline int getMonitorWidth(int monitor) {
                return ::GetMonitorWidth(monitor);
            }

            // Get specified monitor height (max available by monitor)
            inline int getMonitorHeight(int monitor) {
                return ::GetMonitorHeight(monitor);
            }

            // Get specified monitor physical width in millimetres
            inline int getMonitorPhysicalWidth(int monitor) {
                return ::GetMonitorPhysicalWidth(monitor);
            }

            // Get specified monitor physical height in millimetres
            inline int getMonitorPhysicalHeight(int monitor) {
                return ::GetMonitorPhysicalHeight(monitor);
            }

            // Get specified monitor refresh rate
            inline int getMonitorRefreshRate(int monitor) {
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
            inline const std::string getMonitorName(int monitor) {
                const std::string monitorName(::GetMonitorName(monitor));
                return monitorName;
            }

            // Set clipboard text content
            inline Window &setClipboard(const std::string text) {
                ::SetClipboardText(text.c_str());
                return *this;
            }

            // Get clipboard text content
            inline const std::string getClipboard() {
                const std::string clipboard(::GetClipboardText());
                return clipboard;
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
    };
}

#endif