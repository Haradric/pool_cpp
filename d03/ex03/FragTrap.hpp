
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
public:

	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & ref );
	~FragTrap( void );

	void vaulthunter_dot_exe(std::string const & target);

private:

	void funzerker( std::string const & target );
	void meat_unicycle( std::string const & target );
	void shhhhh_trap( std::string const & target );
	void blightbot( std::string const & target );
	void mechromagician( std::string const & target );
};

#endif
