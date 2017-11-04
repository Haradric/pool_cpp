
#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
public:

	Victim( Victim const & );
	Victim( std::string name );
	virtual ~Victim( void );
	
	Victim & operator=( Victim const & );

	std::string getName( void );

	virtual void getPolymorphed( void ) const;

protected:

	std::string _name;

	Victim( void );
};

std::ostream & operator<<( std::ostream &o, Victim & obj );

#endif
