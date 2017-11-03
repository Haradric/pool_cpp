
#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {

	char const *introduce[] = {
		"Hey everybody! Check out my package!",
		"Let's get this party started!",
		"Glitching weirdness is a term of endearment, right?",
	};

	_hp = 100;
	_hpmax = 100;
	_ep = 100;
	_epmax = 100;
	_lvl = 1;
	_melee = 30;
	_ranged = 20;
	_reduct = 5;

	this->say(introduce[rand() % 3]);
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {

	char const *introduce[] = {
		"Hey everybody! Check out my package!",
		"Let's get this party started!",
		"Glitching weirdness is a term of endearment, right?",
	};

	_hp = 100;
	_hpmax = 100;
	_ep = 100;
	_epmax = 100;
	_lvl = 1;
	_melee = 30;
	_ranged = 20;
	_reduct = 5;

	this->say(introduce[rand() % 3]);
}

FragTrap::FragTrap( FragTrap const & ref ) : ClapTrap( ref ) {

	char const *introduce[] = {
		"Hey everybody! Check out my package!",
		"Let's get this party started!",
		"Glitching weirdness is a term of endearment, right?",
	};

	this->say(introduce[rand() % 3]);
}

FragTrap::~FragTrap( void ) {

}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {

	if (_ep < 25) {

		std::cout << "(" << _name << ") " << "not enough energy" << std::endl;
		return ;
	}
	_ep -= 25;

	switch (rand() % 5)
	{
		case 0:
			funzerker(target);
			break;
		case 1:
			meat_unicycle(target);
			break;
		case 2:
			shhhhh_trap(target);
			break;
		case 3:
			blightbot(target);
			break;
		case 4:
			mechromagician(target);
			break;
	}
}

void FragTrap::funzerker( std::string const & target ) {

	std::cout << _name << " attacks!(type: Funzerker";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;
	std::cout << "(" << _name << ") ";
	std::cout << "I'm a sexy dinosaur! Rawr!";
	std::cout << std::endl;
}

void FragTrap::meat_unicycle( std::string const & target ) {

	std::cout << _name << " attacks!(type: Meat Unicycle";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;
	std::cout << "(" << _name << ") ";
	std::cout << "(unintelligible snarling)";
	std::cout << std::endl;
}

void FragTrap::shhhhh_trap( std::string const & target ) {

	std::cout << _name << " attacks!(type: Shhhhh...trap";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;
	std::cout << "(" << _name << ") ";
	std::cout << "I'm cloaking...";
	std::cout << std::endl;
}

void FragTrap::blightbot( std::string const & target ) {

	std::cout << _name << " attacks!(type: Blightbot";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;
	std::cout << "(" << _name << ") ";
	std::cout << "Mini-trap, pretend you're a Siren!";
	std::cout << std::endl;
}

void FragTrap::mechromagician( std::string const & target ) {

	std::cout << _name << " attacks!(type: Mechromagician";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;
	std::cout << "(" << _name << ") ";
	std::cout << "To the skies, mini-trap!";
	std::cout << std::endl;
}
