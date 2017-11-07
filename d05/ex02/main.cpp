
#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main( void )
{
	Bureaucrat b0( "Grisha", 1 );
	Bureaucrat b1( "Misha", 138 );
	Bureaucrat b2( "Tolya", 45 );
	Bureaucrat b3( "Opanas", 5 );

	ShrubberyCreationForm f1( "form1" );
	RobotomyRequestForm f2( "form2" );
	PresidentialPardonForm f3( "form3" );

	std::cout << b1 << std::endl;
	std::cout << f1 << std::endl;

	try {
		f1.beSigned( b0 );
		f2.execute( b1 );
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << b1 << std::endl;
	std::cout << f1 << std::endl;

	try {
		f1.beSigned( b0 );
		b1.incrementGrade();
		b1.executeForm( f1 );
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		f2.beSigned( b0 );
		b2.executeForm( f2 );
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		f3.beSigned( b0 );
		b3.executeForm( f3 );
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << b1 << std::endl;
	std::cout << f1 << std::endl;

	return 0;
}
