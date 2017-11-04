
#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
public:

	Peon( Peon const & );
	Peon( std::string name );
	~Peon( void );

	void getPolymorphed( void ) const;
private:

	Peon( void );

};

#endif