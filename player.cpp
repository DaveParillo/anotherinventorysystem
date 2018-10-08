#include "player.h"
#include "item.h"
#include "stat.h"

#include <iostream>

player::player (const std::string& new_name, const stats_t& initial_stats)
    : name_ (new_name), stats_(initial_stats)
{}

void player::add(const item& new_item) {
    inventory_.push_back(new_item);
}

bool player::drop(const item&) {
    return false;
}

bool player::equip(const item&) {
    return false;
}
// need another param to determine effect/attack/defend
// anti-pattern
void player::use(const item& it) {
    for (const auto& what: it.attack) {
        stats_[what.first] += what.second;
    }

}

std::ostream& operator<<(std::ostream& os, const player& rhs) {
    return os << rhs.name() << ": " << rhs.stats();
}
