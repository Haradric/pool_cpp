
#include <iostream>

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


Intern::Intern( void ) {

}

Intern::Intern( Intern const & target ) {

	(void)target;
}

Intern::~Intern( void ) {

}

Intern & Intern::operator=( Intern const & target ) {

	(void)target;
	return *this;
}

const char* Intern::unknownType::what( void ) const throw() {

	return "unknownType";
}

Form * Intern::makeForm( std::string s1, std::string s2 ) {

	Form * f = 0;

	if ( s1 == "robotomy request" )
		f = new RobotomyRequestForm( s2 );
	else if ( s1 == "shrubbery creation")
		f = new ShrubberyCreationForm( s2 );
	else if ( s1 == "presidential pardon")
		f = new PresidentialPardonForm( s2 );
	else
		throw unknownType();
	std::cout << "Intern creates " << s2 << std::endl;
	return f;
}