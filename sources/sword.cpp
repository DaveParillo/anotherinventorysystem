#include "../includes/item.h"
items::sword::sword(){
	name = "Default Sword";
	stats = {
		{"STR" : 3},
		{"DEX" : 1},
		{"INT" : 1}
	}
}
virtual int items::sword::calculate_damage(std::map<std::string, int> character_stats) overide {
	std::cout << "Sword damage uses strength";
	return stats["STR"] + character_stats["STR"];
}
