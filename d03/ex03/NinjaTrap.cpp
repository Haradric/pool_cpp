
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void ) : ClapTrap() {

	char const *introduce[] = {
		"I am the number one Ninja",
		"I have killed all the Shoguns in front of me",
		"I like swords and knives and stuff like that!"
	};

	_hp = 60;
	_hpmax = 60;
	_ep = 120;
	_epmax = 120;
	_lvl = 1;
	_melee = 60;
	_ranged = 5;
	_reduct = 0;

	this->say(introduce[rand() % 3]);
}

NinjaTrap::NinjaTrap( std::string name ) : ClapTrap( name ) {

	char const *introduce[] = {
		"I am the number one Ninja",
		"I have killed all the Shoguns in front of me",
		"I like swords and knives and stuff like that!"
	};

	_hp = 60;
	_hpmax = 60;
	_ep = 120;
	_epmax = 120;
	_lvl = 1;
	_melee = 60;
	_ranged = 5;
	_reduct = 0;

	this->say(introduce[rand() % 3]);
}

NinjaTrap::NinjaTrap( NinjaTrap const & ref ) : ClapTrap( ref ) {

	char const *introduce[] = {
		"I am the number one Ninja",
		"I have killed all the Shoguns in front of me",
		"I like swords and knives and stuff like that!"
	};

	this->say(introduce[rand() % 3]);
}

NinjaTrap::~NinjaTrap( void ) {

}

void NinjaTrap::ninjaShoebox( ClapTrap const & ref ) const {

	std::cout << "(" << _name << ") ";
	std::cout << "Hey, " << ref.getName() << ", i'm not scared of your... nothing?" << std::endl;
}

void NinjaTrap::ninjaShoebox( FragTrap const & ref ) const {

	std::cout << "(" << _name << ") ";
	std::cout << "Hey, " << ref.getName() << ", i'm not scared of your VaultHunter.EXE!" << std::endl;
}

void NinjaTrap::ninjaShoebox( ScavTrap const & ref ) const {

	std::cout << "(" << _name << ") ";
	std::cout << "Hey, " << ref.getName() << ", i'm not scared of your challengeNewcomer!" << std::endl;
}

void NinjaTrap::ninjaShoebox( NinjaTrap const & ref ) const {

	std::cout << "(" << _name << ") ";
	std::cout << "Hey, " << ref.getName() << ", i'm not scared of your shoe!" << std::endl;
}
