#pragma once

#include "stat.h"

#include <iosfwd>
#include <limits>
#include <string>

struct item {
    item() = default;
    std::string name;
    unsigned uses_remaining = std::numeric_limits<unsigned int>::max();
    stats_t effects;     // used to apply magical buffs to the character holding item
    stats_t attack;      // effects to others when used as a weapon.
    stats_t defend;      // effects to others when used as a defensive item.
};

std::ostream& operator<<(std::ostream& os, const item& rhs);
