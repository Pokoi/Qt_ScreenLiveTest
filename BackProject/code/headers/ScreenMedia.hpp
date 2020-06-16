/*
 * File: ScreenMedia.hpp
 * File Created: 13th June 2020
 * ––––––––––––––––––––––––
 * Author: Jesus Fermin, 'Pokoi', Villar  (hello@pokoidev.com)
 * ––––––––––––––––––––––––
 * MIT License
 *
 * Copyright (c) 2020 Pokoidev
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do
 * so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <library_global.h>

#include <QtCore/qt_windows.h>
#include <QtCore/qsettings.h>
#include <QtWinExtras/QtWin>

#include <map>
#include <vector>
#include <string>

#include <qpixmap.h>

class LIBRARY_EXPORT ScreenMedia
{
    std::map <std::string, HWND> available_windows;
    HWND current_window;
    
    QPixmap render_pixmap;

public:

    ScreenMedia()
    {}

    QPixmap& get_render_pixmap()
    {
        return render_pixmap;
    }

    /**
    @brief Captures the image of the choosen window
    */
    void capture();

    /**
    @brief Get all the names of the available windows
    @return A vector with all the window title names
    */
    std::vector<std::string> get_windows_names();

    /**
    @brief Choose a window to capture by its name
    @param name The name of the choosen window
    */
    void set_current_window_to_capture(std::string name);

private:

    /**
    @brief Update the available windows
    */
    void update_available_windows();
};