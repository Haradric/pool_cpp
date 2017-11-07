
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) {

}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name( name ), _grade( grade ) {

	if ( _grade < 1 )
		throw GradeTooHighException();
	if ( _grade > 150 )
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat( Bureaucrat const & target ) : _name(target._name) {

	*this = target;
}

Bureaucrat::~Bureaucrat( void ) {

}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & target ) {

	_grade = target.getGrade();
	return *this;
}

char const * Bureaucrat::GradeTooHighException::what() const throw() {

	return "grade is too high";
}

char const * Bureaucrat::GradeTooLowException::what() const throw() {

	return "grade is too low";	
}

std::string Bureaucrat::getName( void ) const {

	return _name;
}

int Bureaucrat::getGrade( void ) const {

	return _grade;
}

void Bureaucrat::incrementGrade( void ) {

	if ( _grade == 1 )
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade( void ) {
	
	if ( _grade == 150 )
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::executeForm(Form const & form) {

	form.execute( *this );
	std::cout << _name << " executes " << form.getName() << std::endl;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & target ) {

	o << target.getName() << ", bureaucrat grade is " << target.getGrade();
	return o;
}
