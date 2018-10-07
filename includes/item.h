#include <string>
#include <map>
#include <iostream>
namespace items{
	//item interface
	class item{
	public:
		std::string name;
		std::map<std::string, int> stats;
		virtual int calculate_damage() = 0;
	};

	class sword : public item{
	public:
		sword();
		//sword(std::string name, std::map<std::string, int> init_stats);
		virtual int calculate_damage(std::map<std::string, int> character_stats);
	};

	class staff : public item{
	public:
		staff();
		virtual int calculate_damage(std::map<std::string, int> character_stats);
	};
}
