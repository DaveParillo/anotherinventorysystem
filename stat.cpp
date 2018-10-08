#include "stat.h"

#include <iostream>

std::ostream& operator<<(std::ostream& os, const stat& rhs) {
    switch (rhs) {
        case stat::STR: os << "STR"; break;
        case stat::DEX:  os << "DEX";  break;
        case stat::INT: os << "INT"; break;
        default: os << "error";
    }
    return os;
}

std::ostream& operator<<(std::ostream& os, const stats_t& rhs) {
    os << '[';
    for (const auto& kvp : rhs) {
        os << '{' << kvp.first << ':' << kvp.second << '}';
    }
    return os << ']';
}

