#include "../includes/item.h"
using namespace items;
int main(){
	std::map<std::string, int> test_char_stats{
		{"STR" , 2},
		{"DEX" , 2},
		{"INT" , 2}
	};
	sword test_sword = sword();
	std::cout << test_sword.calculate_damage(test_char_stats) << std::endl;
	return 0;
}
