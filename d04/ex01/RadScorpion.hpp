
#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:

	RadScorpion( void );
	RadScorpion( int hp, std::string const & type );
	RadScorpion( RadScorpion const & );
	~RadScorpion( void );

	RadScorpion & operator=( RadScorpion const & );

};

#endif