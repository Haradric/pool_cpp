
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : _name("Stranger") {

	std::cout << _name << " has been created" << std::endl;

	_hp = 100;
	_hpmax = 100;
	_ep = 50;
	_epmax = 50;
	_lvl = 1;
	_melee = 20;
	_ranged = 15;
	_reduct = 3;

	this->introducePhrase();
}

ScavTrap::ScavTrap( std::string name ) : _name(name) {

	std::cout << _name << " has been created" << std::endl;

	_hp = 100;
	_hpmax = 100;
	_ep = 50;
	_epmax = 50;
	_lvl = 1;
	_melee = 20;
	_ranged = 15;
	_reduct = 3;

	this->introducePhrase();
}

ScavTrap::ScavTrap( ScavTrap const & ref ) {

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

ScavTrap::~ScavTrap() {

}

ScavTrap & ScavTrap::operator=( ScavTrap const & ref) {

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

void ScavTrap::rangedAttack(std::string const & target) {

	std::cout << _name << " attacks!(type: ranged";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;

}

void ScavTrap::meleeAttack(std::string const & target) {

	std::cout << _name << " attacks!(type: melee";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {

	unsigned int caused_dmg = (amount > _reduct) ? amount - _reduct : 0;
	unsigned int gained_dmg = (caused_dmg > _hp) ? _hp : caused_dmg;

	std::cout << _name << " gained " << gained_dmg << " damage!" << std::endl;
	std::cout << _name << " My robotic flesh! AAHH!" << std::endl;

	_hp -= gained_dmg;
}

void ScavTrap::beRepaired(unsigned int amount) {

	unsigned int caused_rep = _hpmax - _hp;
	unsigned int gained_rep = (amount > caused_rep) ? caused_rep : amount;

	std::cout << _name << " gained " << gained_rep << " HP!" << std::endl;
	std::cout << _name << " Aw yeah!" << std::endl;

	_hp += gained_rep;
}

void ScavTrap::introducePhrase( void ) {

	char const *phrase[] = {
		"Recompiling my combat code!",
		"This time it'll be awesome, I promise!",
		"Look out everybody! Things are about to get awesome!"
	};

	std::cout << "(" << _name << ") ";
	std::cout << phrase[rand() % 3] << std::endl;
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
