
#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main( void )
{
	Intern someRandomIntern;
	Form* f1;
	Form* f2;

	try {
		f1 = someRandomIntern.makeForm("zxcvb", "Bender");
	}
	catch( std:: exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		f2 = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	catch( std:: exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
