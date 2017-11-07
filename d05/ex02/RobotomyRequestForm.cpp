
#include <fstream>

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) {

}

RobotomyRequestForm::RobotomyRequestForm( std::string name ) : Form( name, 72, 45 ) {

}

RobotomyRequestForm::~RobotomyRequestForm( void ) {

}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const {

	if ( _execlvl < executor.getGrade() )
		throw GradeTooLowException();
	
	srand( time( NULL ) );

	std::cout << "*ZZZZZZZZSSSSSSSHHHHHHHHHHHH!!!!* ";
	if ( rand() % 2 - 1 )
		std::cout << _name << " has been robotomized successfully" << std::endl;
	else
		std::cout << _name << " hasn't been robotomized" << std::endl;
}
