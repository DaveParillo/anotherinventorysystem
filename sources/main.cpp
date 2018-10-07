#include "../includes/item.h"
using namespace items;
int main(){
    stats_t test_char_stats{
		{"STR" , 2},
		{"DEX" , 2},
		{"INT" , 2}
	};
	sword test_sword;
	std::cout << test_sword.calculate_damage(test_char_stats) << std::endl;
	return 0;
}
