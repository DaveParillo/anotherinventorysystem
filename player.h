#pragma once

#include "stat.h"
#include "item.h"

#include <iosfwd>
#include <string>
#include <vector>

//using stats_t = std::vector<stat_kvp>;

class player {
    public:
        player() = default;
        explicit player(const std::string&, const stats_t&);
        std::string name() const {return name_;};
        stats_t stats()    const {return stats_;};
        std::vector<item> inventory()    const {return inventory_;};

        // function to modify a player inventory
        void add (const item&);
        bool drop(const item&);
        bool equip (const item&); // equip an item from inventory

        // use an item on a player
        void use (const item&);

    private:
        std::string name_;
        stats_t stats_;
        std::vector<item> inventory_;

};

std::ostream& operator<<(std::ostream& os, const player& rhs);
