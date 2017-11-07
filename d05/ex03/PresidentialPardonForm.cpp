
#include <fstream>

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) {

}

PresidentialPardonForm::PresidentialPardonForm( std::string name ) : Form( name, 25, 5 ) {

}

PresidentialPardonForm::~PresidentialPardonForm( void ) {

}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const {

	if ( _execlvl < executor.getGrade() )
		throw GradeTooLowException();

	std::cout << _name << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
