
#include "Form.hpp"

Form::Form( void ) : _name( "unnamed" ), _signlvl(0), _execlvl(0) {

}

Form::Form( std::string name, int signlvl, int execlvl ) : _name(name), _signlvl(signlvl), _execlvl(execlvl) {

	if ( _signlvl < 1 || _execlvl < 1 )
		throw GradeTooHighException();
	if ( _signlvl > 150 || _execlvl > 150 )
		throw GradeTooLowException();
}

Form::Form( Form const & target ) : _name( target._name ), _signlvl( target._signlvl ), _execlvl( target._execlvl ) {

	*this = target;
}

Form::~Form( void ) {

}

Form & Form::operator=( Form const & target ) {

	_signed = target._signed;
	return *this;
}

const char* Form::GradeTooHighException::what( void ) const throw() {

	return "maximum grade is 1";
}

const char* Form::GradeTooLowException::what( void ) const throw() {

	return "maximum grade is 1";
}

std::string Form::getName( void ) const {

	return _name;
}

bool Form::getSigned( void ) const {

	return _signed;
}

int Form::getSignlvl( void ) const {

	return _signlvl;
}

int Form::getExeclvl( void ) const {

	return _execlvl;
}

void Form::beSigned( Bureaucrat const & target ) {

	if ( target.getGrade() > _signlvl )
		throw GradeTooLowException();
	_signed = true;
}

std::ostream & operator<<( std::ostream & o, Form const & target ) {

	o << target.getName() << ", " << (target.getSigned() ? "signed" : "not signed");
	o << ", bureaucrat max grade to sign is " << target.getSignlvl();
	o << ", bureaucrat max grade to exec is " << target.getExeclvl();
	return o;
}