
#include "Enemy.hpp"

Enemy::Enemy( void ) {

}

Enemy::Enemy( int hp, std::string const & type ) : _hp( hp ), _type( type ) {

}

Enemy::Enemy( Enemy const &  target ) {

	_hp = target.getHP();
	_type = target.getType();
}

Enemy::~Enemy( void ) {

}

Enemy & Enemy::operator=( Enemy const & target ) {

	_hp = target.getHP();
	_type = target.getType();
	return *this;
}


int Enemy::getHP( void ) const {

	return _hp;
}

std::string Enemy::getType( void ) const {

	return _type;
}

void Enemy::takeDamage( int damage ) {

	_hp -= ( damage > 0 ) ? damage : 0;
	_hp = ( _hp < 0 ) ? 0 : _hp;
}
