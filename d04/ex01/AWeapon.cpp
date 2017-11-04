
#include "AWeapon.hpp"

AWeapon::AWeapon( void ) {

}

AWeapon::AWeapon( std::string const & name, int apcost, int damage ) : _name(name), _damage(damage), _apcost(apcost) {

}

AWeapon::AWeapon( AWeapon const & target ) {

	_name = target.getName();
	_damage = target.getDamage();
	_apcost = target.getAPCost();
}

AWeapon::~AWeapon( void ) {

}

AWeapon & AWeapon::operator=( AWeapon const & target ) {

	_name = target._name;
	_damage = target._damage;
	_apcost = target._apcost;

	return *this;
}

std::string AWeapon::getName( void ) const {

	return _name;
}

int AWeapon::getAPCost( void ) const {

	return _apcost;
}

int AWeapon::getDamage( void ) const {

	return _damage;
}
