
#ifndef PRESIDENTALPARDONFORM_HPP
# define PRESIDENTALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:

	PresidentialPardonForm( std::string name );
	~PresidentialPardonForm( void );

	void execute( Bureaucrat const & executor ) const;
private:

	PresidentialPardonForm( void );
};


#endif
