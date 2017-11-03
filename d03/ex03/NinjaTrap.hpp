
#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap( void );
	NinjaTrap( std::string name );
	NinjaTrap( NinjaTrap const & ref );
	~NinjaTrap( void );

	void ninjaShoebox( ClapTrap const & ref ) const;
	void ninjaShoebox( FragTrap const & ref ) const;
	void ninjaShoebox( ScavTrap const & ref ) const;
	void ninjaShoebox( NinjaTrap const & ref ) const;
		
};

#endif
