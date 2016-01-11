/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2012-2015 Falltergeist developers
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
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

// C++ standard includes

// Falltergeist includes
#include "../../Format/Aaf/Glyph.h"

// Third party includes

namespace Falltergeist
{
namespace Format
{
namespace Aaf
{

Glyph::Glyph(uint16_t width, uint16_t height) : _width(width), _height(height)
{
}

Glyph::~Glyph()
{
}

uint16_t Glyph::height() const
{
    return _height;
}

void Glyph::setHeight(uint16_t height)
{
    _height = height;
}

uint16_t Glyph::width() const
{
    return _width;
}

void Glyph::setWidth(uint16_t width)
{
    _width = width;
}

std::vector<unsigned char>* Glyph::data()
{
    return &_data;
}

uint32_t Glyph::dataOffset() const
{
    return _dataOffset;
}

void Glyph::setDataOffset(uint32_t value)
{
    _dataOffset = value;
}

}
}
}
