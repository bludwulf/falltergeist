/*
 * Copyright 2012-2014 Falltergeist Developers.
 *
 * This file is part of Falltergeist.
 *
 * Falltergeist is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Falltergeist is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Falltergeist.  If not, see <http://www.gnu.org/licenses/>.
 */

// C++ standard includes

// Falltergeist includes
#include "../../Format/Int/File.h"
#include "../../Logger.h"
#include "../../VM/Handlers/OpcodeA001Handler.h"
#include "../../VM/VM.h"
#include "../../VM/VMStackValue.h"

// Third party includes

namespace Falltergeist
{

OpcodeA001Handler::OpcodeA001Handler(VM* vm) : OpcodeHandler(vm)
{
}

void OpcodeA001Handler::_run()
{
    union {
        unsigned int iValue;
        float fValue;
    } uValue;
    *(_vm->script()) >> uValue.iValue;

    // Skip 4 bytes for read float value
    _vm->setProgramCounter(_vm->programCounter() + 4);
    _vm->dataStack()->push(VMStackValue(uValue.fValue));

    auto& debug = Logger::debug("SCRIPT");
    debug << "[A001] [*] push_d float" << std::endl;
    debug << "    value: " << std::to_string(uValue.fValue) << std::endl;
}

}
