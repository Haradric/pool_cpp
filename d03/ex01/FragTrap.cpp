
#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : _name("Stranger") {

	std::cout << _name << " has been created" << std::endl;

	_hp = 100;
	_hpmax = 100;
	_ep = 100;
	_epmax = 100;
	_lvl = 1;
	_melee = 30;
	_ranged = 20;
	_reduct = 5;

	this->introducePhrase();
}

FragTrap::FragTrap( std::string name ) : _name(name) {

	std::cout << _name << " has been created" << std::endl;

	_hp = 100;
	_hpmax = 100;
	_ep = 100;
	_epmax = 100;
	_lvl = 1;
	_melee = 30;
	_ranged = 20;
	_reduct = 5;

	this->introducePhrase();
}

FragTrap::FragTrap( FragTrap const & ref ) {

	std::cout << _name << " has been created" << std::endl;

	_name = ref._name;
	_hp = ref._hp;
	_hpmax = ref._hpmax;
	_ep = ref._ep;
	_epmax = ref._epmax;
	_lvl = ref._lvl;
	_melee = ref._melee;
	_ranged = ref._ranged;
	_reduct = ref._reduct;

	this->introducePhrase();
}

FragTrap::~FragTrap() {

}

FragTrap & FragTrap::operator=( FragTrap const & ref) {

	_name = ref._name;
	_hp = ref._hp;
	_hpmax = ref._hpmax;
	_ep = ref._ep;
	_epmax = ref._epmax;
	_lvl = ref._lvl;
	_melee = ref._melee;
	_ranged = ref._ranged;
	_reduct = ref._reduct;

	return *this;
}

void FragTrap::rangedAttack(std::string const & target) {

	std::cout << _name << " attacks!(type: ranged";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;

}

void FragTrap::meleeAttack(std::string const & target) {

	std::cout << _name << " attacks!(type: melee";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {

	unsigned int caused_dmg = (amount > _reduct) ? amount - _reduct : 0;
	unsigned int gained_dmg = (caused_dmg > _hp) ? _hp : caused_dmg;

	std::cout << _name << " gained " << gained_dmg << " damage!" << std::endl;
	std::cout << _name << " My robotic flesh! AAHH!" << std::endl;

	_hp -= gained_dmg;
}

void FragTrap::beRepaired(unsigned int amount) {

	unsigned int caused_rep = _hpmax - _hp;
	unsigned int gained_rep = (amount > caused_rep) ? caused_rep : amount;

	std::cout << _name << " gained " << gained_rep << " HP!" << std::endl;
	std::cout << _name << " Aw yeah!" << std::endl;

	_hp += gained_rep;
}

void FragTrap::introducePhrase( void ) {

	char const *phrase[] = {
		"Hey everybody! Check out my package!",
		"Let's get this party started!",
		"Glitching weirdness is a term of endearment, right?",
	};

	std::cout << "(" << _name << ") ";
	std::cout << phrase[rand() % 3] << std::endl;
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
