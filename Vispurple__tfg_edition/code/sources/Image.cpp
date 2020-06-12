/*
 * File: Image.cpp
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


#include <Image.hpp>
#include <math.h>

/**
@brief Converts the image to QImage data
@return The QImage
*/
QImage Image::convert_to_qimage()
{
    QImage img = QImage(int(width), int(height), QImage::Format::Format_RGB32);
    QColor value;

    for (uint16_t i = 0; i < width; ++i)
    {
        for (uint16_t j = 0; j < height; ++j)
        {
            Pixel pixel = pixels[j * width + i];

            value = QColor(pixel.rgb_components.red * 255, pixel.rgb_components.green * 255, pixel.rgb_components.blue * 255);
            if (pixel.rgb_components.red < 0 || pixel.rgb_components.green < 0 || pixel.rgb_components.blue < 0)
            {
                int i = 0;
            }

            img.setPixelColor(i, j, value);
        }
    }

    return img;
}


/**
@brief Exports the image to the given path
@param path The path where exports the image
*/
void Image::export_image(std::string path)
{
    QImage img = QImage(int(width), int(height), QImage::Format::Format_RGB32);
    QColor value;

    for (uint16_t i = 0; i < width; ++i)
    {
        for (uint16_t j = 0; j < height; ++j)
        {
            Pixel pixel = pixels[j * width + i];

            value = QColor(pixel.rgb_components.red * 255, pixel.rgb_components.green * 255, pixel.rgb_components.blue * 255);
            if (pixel.rgb_components.red < 0 || pixel.rgb_components.green < 0 || pixel.rgb_components.blue < 0)
            {
                int i = 0;
            }

            img.setPixelColor(i, j, value);
        }
    }

    for (uint16_t i = 0; i < width; ++i)
    {
        for (uint16_t j = 0; j < height; ++j)
        {
            QColor colour = img.pixel(i, j);
            pixels[j * width + i].rgb_components = Pixel::RGB(size_t(colour.red()), size_t(colour.green()), size_t(colour.blue()));
            pixels[j * width + i].convert_rgb_to_luv();
        }
    }


    img.save(QString::fromStdString(path));
}

/**
@brief Loads an image data from a file path
#param path The path of the image
*/
Image::Image(std::string path) : pixels{ 500 * 500 }
{
    QPixmap pm(QString(path.c_str()));
    QImage image = (pm.toImage());
    width = image.width();
    height = image.height();

    for (uint16_t i = 0; i < width; ++i)
    {
        for (uint16_t j = 0; j < height; ++j)
        {
            QColor colour = image.pixel(i, j);
            pixels[j * width + i].rgb_components = Pixel::RGB(size_t(colour.red()), size_t(colour.green()), size_t(colour.blue()));
        }
    }

}

/**
@brief Blurs the image.
*/
void Image::blur()
{
    int iterator = 0;
    int end = 0;

    float red = 0.f;
    float green = 0.f;
    float blue = 0.f;


    // The critical rows are the first one and last one because they have no previous or next one.
    // They have to be calculated separatly

    // The first row of pixels

    // The firs pixel has no previous pixel. 
    //To prevent to use a conditional, the first pixel is calculated as follows
    add_components(red, green, blue, pixels[iterator]);
    add_components(red, green, blue, pixels[iterator + 1]);
    add_components(red, green, blue, pixels[iterator + width]);
    add_components(red, green, blue, pixels[iterator + width + 1]);

    pixels[iterator].rgb_components.red = red * 0.25f;
    pixels[iterator].rgb_components.green = green * 0.25f;
    pixels[iterator].rgb_components.blue = blue * 0.25f;

    ++iterator;


    // The rest of the first row
    end = width;
    while (iterator < width)
    {
        red = 0.f;
        green = 0.f;
        blue = 0.f;

        add_components(red, green, blue, pixels[iterator]);
        add_components(red, green, blue, pixels[iterator - 1]);
        add_components(red, green, blue, pixels[iterator + 1]);
        add_components(red, green, blue, pixels[iterator + width]);
        add_components(red, green, blue, pixels[iterator + width + 1]);
        add_components(red, green, blue, pixels[iterator + width - 1]);

        pixels[iterator].rgb_components.red = red * 0.16f;
        pixels[iterator].rgb_components.green = green * 0.16f;
        pixels[iterator].rgb_components.blue = blue * 0.16f;

        ++iterator;
    }

    end = width * height - width;

    // The body of the image
    while (iterator < end)
    {
        red = 0.f;
        green = 0.f;
        blue = 0.f;

        add_components(red, green, blue, pixels[iterator]);
        add_components(red, green, blue, pixels[iterator - 1]);
        add_components(red, green, blue, pixels[iterator + 1]);
        add_components(red, green, blue, pixels[iterator + width]);
        add_components(red, green, blue, pixels[iterator + width + 1]);
        add_components(red, green, blue, pixels[iterator + width - 1]);
        add_components(red, green, blue, pixels[iterator - width]);
        add_components(red, green, blue, pixels[iterator - width + 1]);
        add_components(red, green, blue, pixels[iterator - width - 1]);

        pixels[iterator].rgb_components.red = red * 0.11f;
        pixels[iterator].rgb_components.green = green * 0.11f;
        pixels[iterator].rgb_components.blue = blue * 0.11f;

        ++iterator;
    }

    // The last row of pixels
    end += width;
    while (iterator < end - 1)
    {
        red = 0.f;
        green = 0.f;
        blue = 0.f;

        add_components(red, green, blue, pixels[iterator]);
        add_components(red, green, blue, pixels[iterator - 1]);
        add_components(red, green, blue, pixels[iterator + 1]);
        add_components(red, green, blue, pixels[iterator - width]);
        add_components(red, green, blue, pixels[iterator - width - 1]);
        add_components(red, green, blue, pixels[iterator - width + 1]);

        pixels[iterator].rgb_components.red = red * 0.16f;
        pixels[iterator].rgb_components.green = green * 0.16f;
        pixels[iterator].rgb_components.blue = blue * 0.16f;

        ++iterator;
    }

    // The last pixel
    red = 0.f;
    green = 0.f;
    blue = 0.f;

    add_components(red, green, blue, pixels[iterator]);
    add_components(red, green, blue, pixels[iterator - 1]);
    add_components(red, green, blue, pixels[iterator - width]);
    add_components(red, green, blue, pixels[iterator - width - 1]);

    pixels[iterator].rgb_components.red = red * 0.25f;
    pixels[iterator].rgb_components.green = green * 0.25f;
    pixels[iterator].rgb_components.blue = blue * 0.25f;

}

/**
@brief Apply a sobel colour effect to the image
*/
void Image::sobel_colour()
{
    int end = width * height;
    int iterator = 0;

    // set the start in the second row and the end in the previous of the last row
    // This avoid extra conditional operations and the lost of information is not relevant
    iterator += width + 1;
    end -= (width + 1);

    std::vector<float> buffer(width * height);    
    
    float min = 1.f;
    float max = 0.f;


    while (iterator < end)
    {
        float horizontal_edge   = colour_difference(pixels[iterator - 1], pixels[iterator + 1]);
        float diagonal_1_edge   = colour_difference(pixels[iterator - width - 1], pixels[iterator + width + 1]);
        float diagonal_2_edge   = colour_difference(pixels[iterator - width + 1], pixels[iterator + width - 1]);
        float vertical_edge     = colour_difference(pixels[iterator - width], pixels[iterator + width]);
        

        float val = horizontal_edge + diagonal_1_edge + diagonal_2_edge + vertical_edge;
        if (val != 0)
        {
            int i = 0;
        }
        buffer[iterator] = val;

        max = val > max ? val : max;
        min = val < min ? val : min;

        
        ++iterator;
    }
    
    iterator = 0;

    while (iterator < buffer.size())
    {
        buffer[iterator] = (buffer[iterator] - min) / max - min;        

        pixels[iterator].rgb_components.red = buffer[iterator];
        pixels[iterator].rgb_components.green = buffer[iterator];
        pixels[iterator].rgb_components.blue = buffer[iterator];
                
        ++iterator;

    }
}

/**
@brief Compare with a given image
@param other The image to compare with
@return The comparision index in range 0 - 100
*/
float Image::compare(Image& other)
{
    float index = 0.f;
    float iterator = 0;
    float max_count = width * height;

    while (iterator < max_count)
    {
        index += abs(this->get_pixel(iterator).rgb_components.red - other.get_pixel(iterator).rgb_components.red);       
        ++iterator;
    }

    return 100 - (index / max_count);
}