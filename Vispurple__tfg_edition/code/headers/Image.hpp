/*
 * File: Image.hpp
 * File Created: Thursday, 4th June 2020
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


#pragma once

#include <Pixel.hpp>

#include <cstdint>
#include <string>
#include <qpixmap.h>
#include <qcolor.h>
#include <vector>


class Image
{
private:
    std::uint16_t width;        // uint16_t allows numbers from 0 to 65 635 (2 bytes of memory). 
                                // This makes uint16_t better than size_t (It's very strange to have images greater than 65k pixels width)
    std::uint16_t height;       // uint16_t allows numbers from 0 to 65 635 (2 bytes of memory). 
                                // This makes uint16_t better than size_t (It's very strange to have images greater than 65k pixels height)


    std::vector<Pixel> pixels;

public:

    Image() = delete;

    /**
    @brief Creates an empty image with the given size
    @param width The width of the image in pixels
    @param height The height of the image in pixels
    */
    Image(
        std::uint16_t width,
        std::uint16_t height
        ) :
        width(width),
        height(height),
        pixels(width* height)
    {

    }

    /**
    @brief Loads an image data from a file path
    @param path The path of the image
    */
    Image(std::string path);
    
    /**
    @brief Creates a image with the data of another image
    @param other The other image
    */
    Image(
            Image & other
         ) :
            width {other.get_width()},
            height {other.get_height()},
            pixels {other.get_pixels()}
    {
       
    }

    /**
    @brief Converts the image to QImage data
    @return The QImage
    */
    QImage convert_to_qimage();

    /**
    @brief Gets the width of the image
    @return The width of the image
    */
    std::uint16_t get_width() { return width; }

    /**
    @brief Gets the height of the image
    @return The height of the image
    */
    std::uint16_t get_height() { return height; }

    /**
    @brief Gets the pixels of the image
    @return The pixel pointer
    */
    std::vector<Pixel>& get_pixels() { return pixels; }

    /**
    @brief Gets a reference to the pixel at a certain index
    @param index The index of the pixel
    */
    Pixel& get_pixel(uint16_t index);

    /**
    @brief Gets a reference to the pixel at a certain position
    @param x The x coordinate of the pixel
    @param y The y coordinate of the pixel
    */
    Pixel& get_pixel(uint16_t x, uint16_t y);

    /**
    @brief Sets a certain pixel in a given position
    @param x The x coordinate of the pixel
    @param y The y coordinate of the pixel
    @param pixel The pixel data to apply
    */
    void set_pixel(uint16_t x, uint16_t y, Pixel& pixel);

    /**
    @brief Fills the entire image with the given pixel data
    @param pixel The pixel data to apply to all the image pixels
    */
    void fill_image(Pixel& pixel);

    /**
    @brief Exports the image to the given path
    @param path The path where exports the image
    */
    void export_image(std::string path);

    /**
    @brief Blurs the image.
    */
    void blur();

    /**
    @brief Compare with a given image
    @param other The image to compare with
    @return The comparision index in range 0 - 100
    */
    float compare(Image & other);

    /**
    @brief Adds the component values of a given pixel to each given variable. The addition is stored in the given variables
    @param red The red component container
    @param green The green component container
    @param blue The blue component container
    @param original The pixel with the data
    */
    void add_components(float& red, float& green, float& blue, Pixel& original);

    /**
    @brief Apply a sobel colour effect to the image.
    */
    void sobel_colour();

    /**
    @brief Apply a protanopia simulation to the image.
    */
    void simulate_protanopia();

    /**
    @brief Apply a deuteranopia simulation to the image.
    */
    void simulate_deuteranopia();

    /**
    @brief Apply a tritanopia simulation to the image.
    */
    void simulate_tritanopia();

    /**
    @brief Calculates the squared difference between the color of two pixels
    */
    float colour_difference(Pixel& first, Pixel& second);
};