
#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle( void );
	PlasmaRifle( std::string const & name, int apcost, int damage );
	PlasmaRifle( PlasmaRifle const & );
	~PlasmaRifle( void );
	
	PlasmaRifle & operator=( PlasmaRifle const & );
	void attack( void ) const;
};

#endif
