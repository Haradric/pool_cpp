
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
public:

	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & ref );
	~ScavTrap( void );

	void challengeNewcomer(std::string const & target);

private:

	void miniontrap( std::string const & target );
	void rubber_ducky( std::string const & target );
	void senseless_sacrifice( std::string const & target );
	void medbot( std::string const & target );
	void clap_in_the_box( std::string const & target );

};

#endif