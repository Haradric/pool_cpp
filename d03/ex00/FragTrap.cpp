
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
		"Let's get this party started!",
		"Glitching weirdness is a term of endearment, right?",
		"Recompiling my combat code!",
		"This time it'll be awesome, I promise!",
		"Look out everybody! Things are about to get awesome!"
	};

	std::cout << "(" << _name << ") ";
	std::cout << phrase[rand() % 5] << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {

	vaulthunter attack[] = { &FragTrap::funzerker,
		&FragTrap::meat_unicycle,
		&FragTrap::shhhhh_trap,
		&FragTrap::blightbot,
		&FragTrap::mechromagician };

	char const *phrase[] = {
		"This time it'll be awesome, I promise!",
		"Hey everybody, check out my package!",
		"Place your bets!",
		"Defragmenting!",
		"Recompiling my combat code!"
	};

	if (_ep < 25) {
			std::cout << "(" << _name << ") " << "not enough energy" << std::endl;
		return ;
	}
	_ep -= 25;

	std::cout << "(" << _name << ") ";
	std::cout << phrase[rand() % 5] << std::endl;

	(this->*attack[rand() % 5])( target );
}

void FragTrap::funzerker( std::string const & target ) {

	char const *phrase[] = {
		"I'm a sexy dinosaur! Rawr!",
		"Oh god I can't stop!",
		"Don't ask me where this ammo's coming from!",
		"If I had veins, they'd be popping out right now!"
	};

	std::cout << "(" << _name << ") ";
	std::cout << phrase[rand() % 4] << std::endl;

	std::cout << _name << " attacks!(type: Funzerker";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;

}

void FragTrap::meat_unicycle( std::string const & target ) {

	char const *phrase[] = {
		"(unintelligible snarling)",
		"It's the only way to stop the voices!",
		"This was a reeeally bad idea!",
		"I AM ON FIRE!!! OH GOD, PUT ME OUT!!!"
	};

	std::cout << "(" << _name << ") ";
	std::cout << phrase[rand() % 4] << std::endl;

	std::cout << _name << " attacks!(type: Meat Unicycle";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;

}

void FragTrap::shhhhh_trap( std::string const & target ) {

	char const *phrase[] = {
		"I'm cloaking...",
		"Roses are red and/Violets are blue/Wait... how many syllables was that?",
		"Shoot him... he's the real one...",
		"I'm a robot ninja...",
		"I'm invisible!"
	};

	std::cout << "(" << _name << ") ";
	std::cout << phrase[rand() % 5] << std::endl;

	std::cout << _name << " attacks!(type: Shhhhh...trap";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;

}

void FragTrap::blightbot( std::string const & target ) {

	char const *phrase[] = {
		"Mini-trap, pretend you're a Siren!",
		"Aww, I should've drawn tattoos on you!",
		"Burn them, my mini-phoenix!",
		"All burn before the mighty Siren-trap!",
		"Calm down!"
	};

	std::cout << "(" << _name << ") ";
	std::cout << phrase[rand() % 5] << std::endl;

	std::cout << _name << " attacks!(type: Blightbot";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;

}

void FragTrap::mechromagician( std::string const & target ) {

	char const *phrase[] = {
		"To the skies, mini-trap!",
		"Fly mini-trap! Fly!",
		"I have two robot arms!",
		"Punch 'em in the face, mini-trap!",
		"Anarchy and mini-trap and awesomeness, oh my!"
	};

	std::cout << "(" << _name << ") ";
	std::cout << phrase[rand() % 5] << std::endl;

	std::cout << _name << " attacks!(type: Mechromagician";
	std::cout << ", target: " << target;
	std::cout << ", damage: " << _ranged << ") " << std::endl;

}
