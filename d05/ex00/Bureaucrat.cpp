
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) {

}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name( name ), _grade( grade ) {

	if ( _grade < MAX_GRD )
		throw GradeTooHighException();
	if ( _grade > MIN_GRD )
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

	return "maximum grade is 1";
}

char const * Bureaucrat::GradeTooLowException::what() const throw() {

	return "minimum grade is 150";	
}

std::string Bureaucrat::getName( void ) const {

	return _name;
}

int Bureaucrat::getGrade( void ) const {

	return _grade;
}

void Bureaucrat::incrementGrade( void ) {

	if ( _grade == MAX_GRD )
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade( void ) {
	
	if ( _grade == MIN_GRD )
		throw GradeTooLowException();
	_grade++;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & target ) {

	o << target.getName() << ", bureaucrat grade " << target.getGrade();
	return o;
}
