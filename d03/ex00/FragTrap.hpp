
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
class FragTrap;

typedef void (FragTrap::*vaulthunter)(std::string const & target);

class FragTrap
{
public:
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & ref );
	~FragTrap();

	FragTrap & operator=( FragTrap const & ref);

	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

	void vaulthunter_dot_exe(std::string const & target);

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

	void funzerker( std::string const & target );
	void meat_unicycle( std::string const & target );
	void shhhhh_trap( std::string const & target );
	void blightbot( std::string const & target );
	void mechromagician( std::string const & target );
};

#endif