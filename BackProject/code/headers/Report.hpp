/*
 * File: Report.hpp
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

#include <library_global.h>

#include <fstream>
#include <sstream>
#include <streambuf>
#include <QtPrintSupport/qprinter.h>
#include <qtextdocument.h>
#include <string>
#include <memory>
#include <Image.hpp>

class LIBRARY_EXPORT Report
{
    std::string content;

    std::shared_ptr<Image> original;
    std::shared_ptr<Image> protanopia_sobel;
    std::shared_ptr<Image> deuteranopia_sobel;
    std::shared_ptr<Image> tritanopia_sobel;
    std::shared_ptr<Image> achromatopsia_sobel;
    std::shared_ptr<Image> protanomaly_sobel;
    std::shared_ptr<Image> deuteranomaly_sobel;
    std::shared_ptr<Image> tritanomaly_sobel;
    std::shared_ptr<Image> achromatomaly_sobel;

public:

    /**
    @brief Creates and exports a report file
    @param templatePath The path of the template of the report
    */
    Report(const char* templatePath);

    /**
    @brief Frees the memory
    */
    ~Report() = default;

    /**
    @brief Replace a string in a string
    @param str The original string
    @param from The string to replace
    @param to The new string to place
    */
    void replace(std::string& str, const std::string& from, const std::string& to);

    /**
    @brief Exports the report to the given path
    @param exportationPath The path where locate the exported file
    */
    void export_to(const char* exportationPath);   

    /**
    @brief Calculates the protanopia visual accessibility index
    @return The index 
    */
    std::string get_protanopia_accessibility_index();

    /**
    @brief Calculates the deuteranopia visual accessibility index
    @return The index
    */
    std::string get_deuteranopia_accessibility_index();

    /**
    @brief Calculates the tritanopia visual accessibility index
    @return The index
    */
    std::string get_tritanopia_accessibility_index();

    /**
    @brief Calculates the achromatopsia visual accessibility index
    @return The index
    */
    std::string get_achromatopsia_accessibility_index();

    /**
    @brief Calculates the protanomaly visual accessibility index
    @return The index
    */
    std::string get_protanomaly_accessibility_index();

    /**
    @brief Calculates the deuteranomaly visual accessibility index
    @return The index
    */
    std::string get_deuteranomaly_accessibility_index();

    /**
    @brief Calculates the tritanomaly visual accessibility index
    @return The index
    */
    std::string get_tritanomaly_accessibility_index();

    /**
    @brief Calculates the achromatomaly visual accessibility index
    @return The index
    */
    std::string get_achromatomaly_accessibility_index();

    /**
    @brief Gets a reference to the protanopia sobel image
    @return The reference
    */
    std::shared_ptr<Image>& get_protanopia_sobel();
   
    /**
    @brief Gets a reference to the deuteranopia sobel image
    @return The reference
    */
    std::shared_ptr<Image>& get_deuteranopia_sobel();

    /**
    @brief Gets a reference to the tritanopia sobel image
    @return The reference
    */
    std::shared_ptr<Image>& get_tritanopia_sobel();

    /**
    @brief Gets a reference to the achromatopsia sobel image
    @return The reference
    */
    std::shared_ptr<Image>& get_achromatopsia_sobel();

    /**
    @brief Gets a reference to the protanomaly sobel image
    @return The reference
    */
    std::shared_ptr<Image>& get_protanomaly_sobel();

    /**
    @brief Gets a reference to the deuteranomaly sobel image
    @return The reference
    */
    std::shared_ptr<Image>& get_deuteranomaly_sobel();

    /**
    @brief Gets a reference to the tritanomaly sobel image
    @return The reference
    */
    std::shared_ptr<Image>& get_tritanomaly_sobel();

    /**
    @brief Gets a reference to the achromatomaly sobel image
    @return The reference
    */
    std::shared_ptr<Image>& get_achromatomaly_sobel();

    /**
    @brief Sets the original image reference
    @param original The reference to the original image
    */
    void set_original_image(std::shared_ptr<Image>& original);

    /**
    @brief Adds the comments for protanopia
    @param comments The comments
    */
    void add_protanopia_comments(std::string comments);
    
    /**
    @brief Adds the comments for deuteranopia
    @param comments The comments
    */
    void add_deuteranopia_comments(std::string comments);

    /**
    @brief Adds the comments for tritanopia
    @param comments The comments
    */
    void add_tritanopia_comments(std::string comments);

    /**
    @brief Adds the comments for achromatopsia
    @param comments The comments
    */
    void add_achromatopsia_comments(std::string comments);

    /**
    @brief Adds the comments for protanomaly
    @param comments The comments
    */
    void add_protanomaly_comments(std::string comments);

    /**
    @brief Adds the comments for deuteranomaly
    @param comments The comments
    */
    void add_deuteranomaly_comments(std::string comments);

    /**
    @brief Adds the comments for tritanomaly
    @param comments The comments
    */
    void add_tritanomaly_comments(std::string comments);

    /**
    @brief Adds the comments for achromatomaly
    @param comments The comments
    */
    void add_achromatomaly_comments(std::string comments);

};