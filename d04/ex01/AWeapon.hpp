
#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
public:

	AWeapon( void );
	AWeapon( std::string const & name, int apcost, int damage );
	AWeapon( AWeapon const & );
	virtual ~AWeapon( void );

	virtual AWeapon & operator=( AWeapon const & );

	std::string getName( void ) const;
	int getAPCost( void ) const;
	int getDamage( void ) const;
	virtual void attack( void ) const = 0;

protected:

	std::string	_name;
	int			_damage;
	int			_apcost;
};

#endif
