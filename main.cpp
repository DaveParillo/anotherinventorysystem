#include "item.h"
#include "player.h"
#include "stat.h"

#include <iostream>


void attack (player* attacker, player* defender) {
    item x = attacker->inventory()[0];
	std::cout << *attacker <<  "\n    attacks\n    " << *defender
              << " with a " << x << '\n';  
    // the defender is currently 'using' the business end of a weapon
    defender->use(x);
}

int main(){
    player wendell {"Wendel the wicked", 
        {
            {stat::STR, 11},
            {stat::DEX, 8},
            {stat::INT, 14}
        }
    };
    player conan {"Conan", 
        {
            {stat::STR, 18},
            {stat::DEX, 13},
            {stat::INT, 9}
        }
    };
	item sword;
    sword.name = "Broadsword";
    sword.attack.insert({stat::STR, -5});

	conan.add(sword);
	conan.equip(sword);
	attack(&conan, &wendell);
	std::cout << "After attack: \n    " << wendell << std::endl;


	item wand;
    wand.name = "Wand of wonder";
    wand.attack.insert({stat::STR, -8});
    wand.attack.insert({stat::INT, -5});
    wand.attack.insert({stat::DEX, -3});

	wendell.add(wand);
	wendell.equip(wand);
	attack(&wendell, &conan);
	std::cout << "After attack: \n    " << conan << std::endl;

	return 0;
}
