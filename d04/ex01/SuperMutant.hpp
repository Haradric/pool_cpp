
#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:

	SuperMutant( void );
	SuperMutant( int hp, std::string const & type );
	SuperMutant( SuperMutant const & );
	~SuperMutant( void );

	SuperMutant & operator=( SuperMutant const & );

	void takeDamage( int );
};

#endif