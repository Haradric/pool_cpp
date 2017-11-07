
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:

	RobotomyRequestForm( std::string name );
	~RobotomyRequestForm( void );

	void execute( Bureaucrat const & executor ) const;
private:

	RobotomyRequestForm( void );
};


#endif
