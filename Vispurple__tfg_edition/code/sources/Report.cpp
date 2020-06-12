/*
 * File: Report.cpp
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

#include <Report.hpp>


Report::Report(const char* templatePath)
{
    std::ifstream t(templatePath);

    t.seekg(0, std::ios::end);
    content.reserve(t.tellg());
    t.seekg(0, std::ios::beg);

    content.assign((std::istreambuf_iterator<char>(t)), std::istreambuf_iterator<char>());
}


void Report::replace(std::string& str, const std::string& from, const std::string& to)
{
    if (from.empty())
        return;
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

void Report::export(const char* exportationPath)
{
    Image protanopia(*original);
    Image deuteranopia(*original);
    Image tritanopia(*original);
    Image copy_original(*original);

    protanopia.simulate_protanopia();
    deuteranopia.simulate_deuteranopia();
    tritanopia.simulate_tritanopia();
    copy_original.sobel_colour();


    original->export_image("../../generated/report/images/original.png");
    copy_original.export_image("../../generated/report/images/originalSobel.png");

    protanopia.export_image("../../generated/report/images/protanopia.png");
    deuteranopia.export_image("../../generated/report/images/deuteranopia.png");
    tritanopia.export_image("../../generated/report/images/tritanopia.png");

    protanopia.sobel_colour();
    deuteranopia.sobel_colour();
    tritanopia.sobel_colour();

    protanopia.export_image("../../generated/report/images/protanopiaSobel.png");
    deuteranopia.export_image("../../generated/report/images/deuteranopiaSobel.png");
    tritanopia.export_image("../../generated/report/images/tritanopiaSobel.png");

    replace(content, "logoSource", "../../generated/report/images/vispurple_banner.png");
    replace(content, "originalSource", "../../generated/report/images/original.png");
    replace(content, "originalSobelSource", "../../generated/report/images/originalSobel.png");
    replace(content, "protanopiaSource", "../../generated/report/images/protanopia.png");
    replace(content, "protanopiaSobelSource", "../../generated/report/images/protanopiaSobel.png");
    replace(content, "deuteranopiaSource", "../../generated/report/images/deuteranopia.png");
    replace(content, "deuteranopiaSobelSource", "../../generated/report/images/deuteranopiaSobel.png");
    replace(content, "tritanopiaSource", "../../generated/report/images/tritanopia.png");
    replace(content, "tritanopiaSobelSource", "../../generated/report/images/tritanopiaSobel.png");
    replace(content, "protanopiaIndex", get_protanopia_accessibility_index());
    replace(content, "deuteranopiaIndex", get_deuteranopia_accessibility_index());
    replace(content, "tritanopiaIndex", get_tritanopia_accessibility_index());

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName(exportationPath);

    QTextDocument doc;
    doc.setHtml(content.c_str());
    doc.setPageSize(printer.pageRect().size());
    doc.print(&printer);
}


std::string Report::get_protanopia_accessibility_index()
{
    Image original_sobel(*original);
    protanopia_sobel = std::make_shared<Image>(*original);

    original_sobel.sobel_colour();
    protanopia_sobel->simulate_protanopia();
    protanopia_sobel->sobel_colour();

    return std::to_string(protanopia_sobel->compare(original_sobel)) + "%";
}


std::string Report::get_deuteranopia_accessibility_index()
{
    Image original_sobel(*original);
    deuteranopia_sobel = std::make_shared<Image>(*original);

    original_sobel.sobel_colour();
    deuteranopia_sobel->simulate_deuteranopia();
    deuteranopia_sobel->sobel_colour();

    return std::to_string(deuteranopia_sobel->compare(original_sobel)) + "%";
}


std::string Report::get_tritanopia_accessibility_index()
{
    Image original_sobel(*original);
    tritanopia_sobel = std::make_shared<Image>(*original);

    original_sobel.sobel_colour();
    tritanopia_sobel->simulate_tritanopia();
    tritanopia_sobel->sobel_colour();

    return std::to_string(tritanopia_sobel->compare(original_sobel)) + "%";
}


std::shared_ptr<Image>& Report::get_protanopia_sobel()
{
    return protanopia_sobel;
}


std::shared_ptr<Image>& Report::get_deuteranopia_sobel()
{
    return deuteranopia_sobel;
}


std::shared_ptr<Image>& Report::get_tritanopia_sobel()
{
    return tritanopia_sobel;
}

void Report::set_original_image(std::shared_ptr<Image>& original)
{
    this->original = original;
}
