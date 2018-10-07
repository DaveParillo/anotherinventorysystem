#include "../includes/item.h"
items::staff::staff(){
	name = "Default Staff";
	stats = {
		{"STR" , 1},
		{"DEX" , 1},
		{"INT" , 3}
	};
}
int items::staff::calculate_damage(stats_t character_stats) {
	std::cout << "staff damage uses strength";
	return stats["INT"] + character_stats["INT"];
}
