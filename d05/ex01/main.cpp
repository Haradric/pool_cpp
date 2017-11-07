
#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main( void )
{
	Bureaucrat b1( "Grisha", 76 );
	Form f1( "abc", 75, 75 );

	std::cout << f1 << std::endl;
	std::cout << b1 << std::endl;

	try {
		f1.beSigned( b1 );
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		b1.incrementGrade();
		f1.beSigned( b1 );
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << f1 << std::endl;
	std::cout << b1 << std::endl;

	return 0;
}
