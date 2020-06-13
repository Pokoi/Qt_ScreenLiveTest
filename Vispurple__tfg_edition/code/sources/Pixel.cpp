/*
 * File: Pixel.cpp
 * File Created: Thursday, 4th June 2020
 * 末末末末末末末末末末末末
 * Author: Jesus Fermin, 'Pokoi', Villar  (hello@pokoidev.com)
 * 末末末末末末末末末末末末
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

#include <Pixel.hpp>
 
void Pixel::convert_xyz_to_luv(float* buffer)
{
    float Xr = 0.33f;
    float Yr = 0.33f;
    float Zr = 0.33f;
    float yr;
    float us;
    float vs;
    float usr;
    float vsr;
    float e;
    float k;

    yr = buffer[1] * 3.f;         //< It's the same that divide buffer[1] / Yr 
    us = 4 * buffer[0] / (buffer[0] + 15 * buffer[1] + 3 * buffer[2]);
    vs = 9 * buffer[1] / (buffer[0] + 15 * buffer[1] + 3 * buffer[2]);
    usr = 4 * Xr / (Xr + 15 * Yr + 2 * Zr);
    vsr = 9 * Yr / (Xr + 15 * Yr + 3 * Zr);

    e = 216.0f / 24389.f;
    k = 24389.0f / 27.f;

    luv_components.l = yr > e ?
        116.f * pow(yr, 0.33) - 16
        : k * yr;

    luv_components.u = 13.0f * luv_components.l * (us - usr);
    luv_components.v = 13.0f * luv_components.l * (vs - vsr);

}

void Pixel::convert_luv_to_rgb()
{
    float Xr = 0.33f;
    float Yr = 0.33f;
    float Zr = 0.33f;
    float usr = 4 * Xr / (Xr + 15 * Yr + 2 * Zr);
    float vsr = 9 * Yr / (Xr + 15 * Yr + 3 * Zr);

    float u_ = luv_components.u / (13 * luv_components.l) + usr;
    float v_ = luv_components.v / (13 * luv_components.l) + vsr;
    float Y = pow(((luv_components.l + 16) / 116), 3);
    float X = (-9 * Y * u_) / (u_ - 4) * v_ - u_ * v_;
    float Z = (9 * Y - 15 * v_ * Y - v_ * X) / 3 * v_;

    float r = (3.063218f) * X + (-1.393325f) * Y + (-0.475802f) * Z;
    float g = (-0.969243f) * X + (1.875966f) * Y + (0.041555f) * Z;
    float b = (0.067871f) * X + (-0.228834f) * Y + (1.069251f) * Z;

    rgb_components.red = r < 0.f ? 0.f : r > 1.f ? 1.f : r;
    rgb_components.green = g < 0.f ? 0.f : g > 1.f ? 1.f : g;
    rgb_components.blue = b < 0.f ? 0.f : b > 1.f ? 1.f : b;
}


float Pixel::clamp(float value, float min, float max)
{
    return value < min ? min : value > max ? max : value;
}


void Pixel::convert_rgb_to_luv()
{
    if (rgb_components.red == 0 && rgb_components.green == 0 && rgb_components.blue == 0)
    {
        luv_components.l = luv_components.u = luv_components.v = 0.f;
    }

    else
    {
        float buffer[3];
        convert_rgb_to_xyz(buffer);
        convert_xyz_to_luv(buffer);
    }
}


void Pixel::simulate_protanopia()
{
    float buffer[3];
    convert_rgb_to_xyz(buffer);
    convert_xyz_to_xyzp(buffer);
    convert_xyz_to_rgb(buffer);
}


void Pixel::simulate_deuteranopia()
{
    float buffer[3];
    convert_rgb_to_xyz(buffer);
    convert_xyz_to_xyzd(buffer);
    convert_xyz_to_rgb(buffer);
}


void Pixel::simulate_tritanopia()
{
    float buffer[3];

    convert_rgb_to_xyz(buffer);
    convert_xyz_to_rgb(buffer);

    convert_rgb_to_luv();

    float l = (17.8824f) * rgb_components.red + (43.5161f) * rgb_components.green + (4.11935f) * rgb_components.blue;
    float m = (3.45565f) * rgb_components.red + (27.1554f) * rgb_components.green + (3.86714f) * rgb_components.blue;
    float s = (0.029956f) * rgb_components.red + (0.18431f) * rgb_components.green + (1.46709f) * rgb_components.blue;
       
    buffer[0] = (1.0f) * luv_components.l + (0.0f) * luv_components.u + (0.0f) * luv_components.v;
    buffer[1] = (0.0f) * luv_components.l + (1.f) * luv_components.u + (0.0f) * luv_components.v;
    buffer[2] = (-0.39591) * luv_components.l + (0.801109f) * luv_components.u + (0.0f) * luv_components.v;

    luv_components.l = buffer[0];
    luv_components.u = buffer[1];
    luv_components.v = buffer[2];

    convert_luv_to_rgb();
    /*
    
    rgb_components.red = clamp(((0.080944f) * buffer[0] + (-0.13050f) * buffer[1] + (0.11672f) * buffer[2]), 0.0f, 1.0f);
    rgb_components.green = clamp(((0.113614f) * buffer[0] + (-0.01025f) * buffer[1] + (0.05402f) * buffer[2]), 0.0f, 1.0f);
    rgb_components.blue = clamp(((-0.000365f) * buffer[0] + (-0.00412f) * buffer[1] + (0.69351f) * buffer[2]), 0.0f, 1.0f);
    */




    //convert_rgb_to_luv();

}

void Pixel::correct_deuteranopia()
{
    float w1 = -2.177648f * -4.150670f;
    float w2 = -4.045076f * -4.150670f;
    float w3 = 0.678274f  * -4.150670f;
    float w4 = -2.177648f * -3.763085f;
    float w5 = -4.045076f * -3.763085f;
    float w6 = 0.678274f  * -3.763085f;
    float w7 = -2.177648f * -3.606220f;
    float w8 = -4.045076f * -3.606220f;
    float w9 = 0.678274f  * -3.606220f;

    convert_rgb_to_luv();

    float r = rgb_components.red;
    float g = rgb_components.green;
    float b = rgb_components.blue;

    float l = luv_components.l;
    float u = luv_components.u;
    float v = luv_components.v;

    float Li = l * w1 + u * w2 + v * w3;
    float Ui = l * w4 + u * w5 + v * w6;
    float Vi = l * w7 + u * w8 + v * w9;

    luv_components.l = Li;
    luv_components.u = Ui;
    luv_components.v = Vi;

    convert_luv_to_rgb();

    float Ri = rgb_components.red;
    float Gi = rgb_components.green;
    float Bi = rgb_components.blue;

    float Rm = (Ri + r);
    float Gm = (Gi + g);
    float Bm = (Bi + b) + Ri;

    rgb_components.red   = Rm < 0.f ? 0.f : Rm > 1.f ? 1.f : Rm;
    rgb_components.green = Gm < 0.f ? 0.f : Gm > 1.f ? 1.f : Gm;
    rgb_components.blue  = Bm < 0.f ? 0.f : Bm > 1.f ? 1.f : Bm;
}


void Pixel::convert_rgb_to_xyz(float* buffer)
{
    buffer[0] = (0.430574f) * rgb_components.red + (0.341550f) * rgb_components.green + (0.178325f) * rgb_components.blue;
    buffer[1] = (0.222015f) * rgb_components.red + (0.706655f) * rgb_components.green + (0.071330f) * rgb_components.blue;
    buffer[2] = (0.020183f) * rgb_components.red + (0.129553f) * rgb_components.green + (0.939180f) * rgb_components.blue;
}


void Pixel::convert_xyz_to_xyzp(float* buffer)
{
    float original_0 = buffer[0];
    float original_1 = buffer[1];
    float original_2 = buffer[2];

    buffer[0] = (-0.3813f) * original_0 + (1.1228f) * original_1 + (0.1730f) * original_2;
    buffer[1] = (-0.4691f) * original_0 + (1.3813f) * original_1 + (0.0587f) * original_2;
    buffer[2] = /*(0.0f)   * original_0 + (0.0f)    * original_1 + */(1.0f) * original_2;
}


void Pixel::convert_xyz_to_xyzd(float* buffer)
{
    float original_0 = buffer[0];
    float original_1 = buffer[1];
    float original_2 = buffer[2];

    buffer[0] = (0.1884f) * original_0 + (0.6597f) * original_1 + (0.1016f) * original_2;
    buffer[1] = (0.2318f) * original_0 + (0.8116f) * original_1 + (-0.0290f) * original_2;
    buffer[2] = /*(0.0f)  * original_0 + (0.0f)    * original_1 + */(1.0f) * original_2;
}


void Pixel::convert_xyz_to_rgb(float* buffer)
{
    float r = (3.063218f) * buffer[0] + (-1.393325f) * buffer[1] + (-0.475802f) * buffer[2];
    float g = (-0.969243f) * buffer[0] + (1.875966f) * buffer[1] + (0.041555f) * buffer[2];
    float b = (0.067871f) * buffer[0] + (-0.228834f) * buffer[1] + (1.069251f) * buffer[2];
    rgb_components.red = clamp(r, 0.f, 1.f);
    rgb_components.green = clamp(g, 0.f, 1.f);;
    rgb_components.blue = clamp(b, 0.f, 1.f);;
}
