
#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ) : Enemy( 170, "Super Mutant" ) {

	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant( int hp, std::string const & type ) : Enemy( hp, type ) {

	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant( SuperMutant const & target ) : Enemy( target ) {

	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant( void ) {

	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant & SuperMutant::operator=( SuperMutant const & target) {

	Enemy::operator=( target );
	return *this;
}

void SuperMutant::takeDamage( int damage ) {

	damage -= 3;
	_hp -= ( damage > 0 ) ? damage : 0;
	_hp = ( _hp < 0 ) ? 0 : _hp;
}
