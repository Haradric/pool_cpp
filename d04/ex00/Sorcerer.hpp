
#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
#include "Victim.hpp"

class Sorcerer
{
public:

	Sorcerer( Sorcerer const & );
	Sorcerer( std::string name, std::string title );
	~Sorcerer( void );

	Sorcerer & operator=( Sorcerer const & );

	std::string getName( void );
	std::string getTitle( void );

	void polymorph( Victim const & ) const;

private:

	std::string _name;
	std::string _title;

	Sorcerer( void );
};

std::ostream & operator<<( std::ostream &o, Sorcerer & obj );

#endif
