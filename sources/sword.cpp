#include "../includes/item.h"
items::sword::sword(){
	name = "Default Sword";
	stats = {
		{"STR", 3},
		{"DEX", 1},
		{"INT", 1}
	};
}
int items::sword::calculate_damage(stats_t character_stats) {
	std::cout << "Sword damage uses strength";
	return stats["STR"] + character_stats["STR"];
}
