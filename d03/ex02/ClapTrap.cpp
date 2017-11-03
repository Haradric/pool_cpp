
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {

	_name = "Stranger";

	std::cout << _name << " has been created" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) {

	_name = name;
	_hp = 100;
	_hpmax = 100;
	_ep = 100;
	_epmax = 100;
	_lvl = 1;
	_melee = 30;
	_ranged = 20;
	_reduct = 5;

	std::cout << _name << " has been created" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & ref ) {

	_name = ref._name;
	_hp = ref._hp;
	_hpmax = ref._hpmax;
	_ep = ref._ep;
	_epmax = ref._epmax;
	_lvl = ref._lvl;
	_melee = ref._melee;
	_ranged = ref._ranged;
	_reduct = ref._reduct;

	std::cout << _name << " has been created" << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout << _name << " has been destroyed" << std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & ref) {

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

void ClapTrap::rangedAttack(std::string const & target) {

	std::cout << _name << " attacks!(type: ranged";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;

}

void ClapTrap::meleeAttack(std::string const & target) {

	std::cout << _name << " attacks!(type: melee";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {

	unsigned int caused_dmg = (amount > _reduct) ? amount - _reduct : 0;
	unsigned int gained_dmg = (caused_dmg > _hp) ? _hp : caused_dmg;

	std::cout << _name << " gained " << gained_dmg << " damage!" << std::endl;
	std::cout << _name << " My robotic flesh! AAHH!" << std::endl;

	_hp -= gained_dmg;
}

void ClapTrap::beRepaired(unsigned int amount) {

	unsigned int caused_rep = _hpmax - _hp;
	unsigned int gained_rep = (amount > caused_rep) ? caused_rep : amount;

	std::cout << _name << " gained " << gained_rep << " HP!" << std::endl;
	std::cout << _name << " Aw yeah!" << std::endl;

	_hp += gained_rep;
}

void ClapTrap::say( std::string phrase ) {

	std::cout << "(" << _name << ") " << phrase << std::endl;
}
