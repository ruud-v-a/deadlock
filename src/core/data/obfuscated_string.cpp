// Deadlock � fast search-based password manager
// Copyright (C) 2012 Ruud van Asseldonk

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "obfuscated_string.h"

using namespace deadlock::core::data;

// <see password.cpp for implementation of the empty obfuscated string>

obfuscated_string::obfuscated_string(const std::string& string_of_obfuscated_bytes) :
	obfuscated_data(string_of_obfuscated_bytes)
{

}

const obfuscated_string& obfuscated_string::empty()
{
	return empty_obfuscated_string;
}