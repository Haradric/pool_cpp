
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap;

class ScavTrap
{
public:
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & ref );
	~ScavTrap();

	ScavTrap & operator=( ScavTrap const & ref);

	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

	void challengeNewcomer(std::string const & target);

private:

	std::string _name;
	unsigned int _hp;
	unsigned int _hpmax;
	unsigned int _ep;
	unsigned int _epmax;
	unsigned int _lvl;
	unsigned int _melee;
	unsigned int _ranged;
	unsigned int _reduct;

	void introducePhrase( void );

	void miniontrap( std::string const & target );
	void rubber_ducky( std::string const & target );
	void senseless_sacrifice( std::string const & target );
	void medbot( std::string const & target );
	void clap_in_the_box( std::string const & target );

};

#endif