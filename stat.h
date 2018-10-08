#pragma once

#include <array>
#include <iosfwd>
#include <string>
#include <map>

enum class stat {STR, DEX, INT};

// Allows the stat enum members to be streamed with meaningful strings.
std::ostream& operator<<(std::ostream& os, const stat& rhs);

//Allows the enum to be used in a range for loop
//Example:
//   for (const auto& s: player_stats) {
//     // do something with the stat_type s . . .
//   }
const std::array<stat,3> stat_types =
{
    {
        stat::STR,
        stat::DEX,
        stat::INT
    }
};

// a map of stats and their values
using stats_t = std::map<stat, int>;

std::ostream& operator<<(std::ostream& os, const stats_t& rhs);


