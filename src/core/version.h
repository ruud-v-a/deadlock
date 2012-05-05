#ifndef _DEADLOCK_CORE_VERSION_H_
#define _DEADLOCK_CORE_VERSION_H_

#include <cstdint>

namespace deadlock
{
	namespace core
	{
		/// Represents a version as a 32-bit integer
		/// 8-bits are reserved for the major number, minor number, revision and build number.
		/// (That means there should not be more than 255 builds of one revision)
		struct version
		{
			std::int8_t major;

			std::int8_t minor;

			std::int8_t revision;

			std::int8_t build;

			/// Empty constructor creates version 1
			version();

			/// Creates a fully specified version
			version(std::int8_t major_number, std::int8_t minor_number, std::int8_t revision_number, std::int8_t build_number);

			/// Constructs a version from an integer
			version(std::int32_t int32);

			/// Returns the version as an integer
			operator std::int32_t ();
		};
	}
}

#endif