#include "item.h"

#include <iostream>

std::ostream& operator<<(std::ostream& os, const item& rhs) {
    return os << rhs.name;
}

