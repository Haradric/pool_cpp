
#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist( void );
	PowerFist( std::string const & name, int apcost, int damage );
	PowerFist( PowerFist const & );
	~PowerFist( void );
	
	PowerFist & operator=( PowerFist const & );
	void attack( void ) const;
};

#endif
