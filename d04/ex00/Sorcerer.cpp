
#include "Sorcerer.hpp"

Sorcerer::Sorcerer( void ) {

}

Sorcerer::Sorcerer( Sorcerer const & target ) {

	_name = target._name;
	_title = target._title;
}

Sorcerer::Sorcerer( std::string name, std::string title ) : _name(name), _title(title) {

	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer( void ) {

	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer & Sorcerer::operator=( Sorcerer const & target ) {

	_name = target._name;
	_title = target._title;
	return *this;
}

std::ostream & operator<<( std::ostream &o, Sorcerer & obj ) {

	o << "I am " << obj.getName() << ", " << obj.getTitle() << ", and I like ponies !" << std::endl;
	return o;
}

void Sorcerer::polymorph( Victim const & target ) const {

	target.getPolymorphed();
}

std::string Sorcerer::getName( void ) {

	return _name;
}

std::string Sorcerer::getTitle( void ) {

	return _title;
}