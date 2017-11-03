
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:

	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const & ref );
	~ClapTrap( void );

	ClapTrap & operator=( ClapTrap const & ref );

	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

protected:

	std::string _name;
	unsigned int _hp;
	unsigned int _hpmax;
	unsigned int _ep;
	unsigned int _epmax;
	unsigned int _lvl;
	unsigned int _melee;
	unsigned int _ranged;
	unsigned int _reduct;

	void say( std::string phrase );

};

#endif