
#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
public:

	Enemy( void );
	Enemy( int hp, std::string const & type );
	Enemy( Enemy const & );
	virtual ~Enemy( void );

	Enemy & operator=( Enemy const & );
	
	int getHP( void ) const;
	std::string getType( void ) const;
	virtual void takeDamage( int );

protected:

	int _hp;
	std::string _type;
};

#endif