
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {

	char const *introduce[] = {
		"Recompiling my combat code!",
		"This time it'll be awesome, I promise!",
		"Look out everybody! Things are about to get awesome!"
	};

	_hp = 100;
	_hpmax = 100;
	_ep = 50;
	_epmax = 50;
	_lvl = 1;
	_melee = 20;
	_ranged = 15;
	_reduct = 3;

	this->say(introduce[rand() % 3]);
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {

	char const *introduce[] = {
		"Recompiling my combat code!",
		"This time it'll be awesome, I promise!",
		"Look out everybody! Things are about to get awesome!"
	};

	_hp = 100;
	_hpmax = 100;
	_ep = 50;
	_epmax = 50;
	_lvl = 1;
	_melee = 20;
	_ranged = 15;
	_reduct = 3;

	this->say(introduce[rand() % 3]);
}

ScavTrap::ScavTrap( ScavTrap const & ref ) : ClapTrap( ref ) {

	char const *introduce[] = {
		"Recompiling my combat code!",
		"This time it'll be awesome, I promise!",
		"Look out everybody! Things are about to get awesome!"
	};

	this->say(introduce[rand() % 3]);
}

ScavTrap::~ScavTrap( void ) {

}

void ScavTrap::challengeNewcomer(std::string const & target) {

	if (_ep < 25) {

		std::cout << "(" << _name << ") " << "not enough energy" << std::endl;
		return ;
	}
	_ep -= 25;

	switch (rand() % 5)
	{
		case 0:
			miniontrap(target);
			break;
		case 1:
			rubber_ducky(target);
			break;
		case 2:
			senseless_sacrifice(target);
			break;
		case 3:
			medbot(target);
			break;
		case 4:
			clap_in_the_box(target);
			break;
	}
}

void ScavTrap::miniontrap( std::string const & target ) {

	std::cout << _name << " attacks!(type: Miniontrap";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;
	std::cout << "(" << _name << ") ";
	std::cout << "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!";
	std::cout << std::endl;
}

void ScavTrap::rubber_ducky( std::string const & target ) {

	std::cout << _name << " attacks!(type: Rubber Ducky";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;
	std::cout << "(" << _name << ") ";
	std::cout << "Boiyoiyoiyoiyoing!";
	std::cout << std::endl;
}

void ScavTrap::senseless_sacrifice( std::string const & target ) {

	std::cout << _name << " attacks!(type: Senseless Sacrifice";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;
	std::cout << "(" << _name << ") ";
	std::cout << "For you...I commit...seddoku...";
	std::cout << std::endl;
}

void ScavTrap::medbot( std::string const & target ) {

	std::cout << _name << " attacks!(type: Medbot";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;
	std::cout << "(" << _name << ") ";
	std::cout << "Love bullets!";
	std::cout << std::endl;
}

void ScavTrap::clap_in_the_box( std::string const & target ) {

	std::cout << _name << " attacks!(type: Clap-in-the-Box";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;
	std::cout << "(" << _name << ") ";
	std::cout << "Some days, you just can't get rid of an obscure pop-culture reference.";
	std::cout << std::endl;
}
