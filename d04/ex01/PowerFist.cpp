
#include "PowerFist.hpp"

PowerFist::PowerFist( void ) : AWeapon( "Power Fist", 8, 50 ) {

}

PowerFist::PowerFist( std::string const & name, int apcost, int damage ) : AWeapon( name, apcost, damage ) {

}

PowerFist::PowerFist( PowerFist const & target ) : AWeapon(target) {

}

PowerFist::~PowerFist( void ) {

}

PowerFist & PowerFist::operator=( PowerFist const & target) {

	AWeapon::operator=( target );
	return *this;
}

void PowerFist::attack( void ) const {

	std::cout << "“* pschhh... SBAM! *" << std::endl;
}
