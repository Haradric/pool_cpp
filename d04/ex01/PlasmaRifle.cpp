
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon( "Plasma Rifle", 5, 21 ) {

}

PlasmaRifle::PlasmaRifle( std::string const & name, int apcost, int damage ) : AWeapon( name, apcost, damage ) {

}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & target ) : AWeapon(target) {

}

PlasmaRifle::~PlasmaRifle( void ) {

}

PlasmaRifle & PlasmaRifle::operator=( PlasmaRifle const & target) {

	AWeapon::operator=( target );
	return *this;
}

void PlasmaRifle::attack( void ) const {

	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
