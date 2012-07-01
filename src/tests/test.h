// Deadlock – fast search-based password manager
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

#ifndef _DEADLOCK_TESTS_TEST_H_
#define _DEADLOCK_TESTS_TEST_H_

#include <string>

namespace deadlock
{
	namespace tests
	{
		/// Represents one unit test
		class test
		{
			public:

				/// Should run the test
				virtual void run() = 0;

				/// Should return the name of the test
				virtual std::string get_name() = 0;
		};
	}
}

#endif