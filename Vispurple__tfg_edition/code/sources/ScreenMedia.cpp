#include "..\headers\ScreenMedia.hpp"
/*
 * File: ScreenMedia.cpp
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


void ScreenMedia::capture()
{
    int x = 0;
    int y = 0;
    int width = 0;
    int height = 0;

    RECT r;

    if (current_window)
    {
        GetClientRect(current_window, &r);
    }
    else
    {
        current_window = GetDesktopWindow();
        GetWindowRect(current_window, &r);
    }

    x += r.left;
    y += r.top;
    width = r.right - r.left;
    height = r.bottom - r.top;

    // Device context where copy screen data
    HDC display_dc = GetDC(nullptr);
    HDC bitmap_dc = CreateCompatibleDC(display_dc);
    HBITMAP bitmap = CreateCompatibleBitmap(display_dc, width, height);
    HGDIOBJ null_bitmap = SelectObject(bitmap_dc, bitmap);

    // Copy the data from window to bitmap_dc
    HDC window_dc = GetDC(current_window);
    BitBlt(bitmap_dc, 0, 0, width, height, window_dc, x, y, SRCCOPY | CAPTUREBLT);

    // Clean
    ReleaseDC(current_window, window_dc);
    SelectObject(bitmap_dc, null_bitmap);
    DeleteDC(bitmap_dc);

    render_pixmap = QtWin::fromHBITMAP(bitmap);

    DeleteObject(bitmap);
    ReleaseDC(nullptr, display_dc);
}

std::vector<std::string> ScreenMedia::get_windows_names()
{

    update_available_windows();

    std::vector <std::string> names;

    for (
        std::map <std::string, HWND>::iterator it = available_windows.begin();
        it != available_windows.end();
        ++it
        )
    {
        names.push_back(it->first);
    }

    return names;
}


void ScreenMedia::set_current_window_to_capture(std::string name)
{
    current_window = available_windows[name];
}

void ScreenMedia::update_available_windows()
{
    available_windows.clear();

    for (
        HWND hwnd = GetTopWindow(NULL);
        hwnd != NULL;
        hwnd = GetNextWindow(hwnd, GW_HWNDNEXT)
        )
    {
        if (!IsWindowVisible(hwnd))
        {
            continue;
        }

        int length = GetWindowTextLength(hwnd);
        if (length == 0)
            continue;

        LPWSTR title = new TCHAR[length + 1];
        GetWindowText(hwnd, title, length + 1);

        std::string name;
        name.reserve(wcslen(title));

        while (*title)
        {
            name += (char)*title;
            ++title;
        }

        available_windows[name] = hwnd;

        delete[] title;
    }
}

