
#include <iostream>

#include "Bureaucrat.hpp"

int		main( void )
{
	Bureaucrat a( "Grisha", 1 );
	Bureaucrat b( "Misha", 150 );

	try {
		a.incrementGrade();
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		b.decrementGrade();
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat c( "Tolya", 200 );
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat d( "Opanas", 0 );
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << a << b << std::endl;

}
