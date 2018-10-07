#include <string>
#include <map>
#include <iostream>
namespace items{
	//item interface
    using stats_t = std::map<std::string, int>;
	class item{
	public:
		std::string name;
		stats_t stats;
		virtual int calculate_damage(stats_t) = 0;
	};

	class sword : public item{
	public:
		sword();
		//sword(std::string name, std::map<std::string, int> init_stats);
		virtual int calculate_damage(stats_t) override;
	};

	class staff : public item{
	public:
		staff();
		virtual int calculate_damage(stats_t) override;
	};
}
