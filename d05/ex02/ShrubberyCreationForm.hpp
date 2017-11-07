
#ifndef SHRUBBERYCREATiONFORM_HPP
# define SHRUBBERYCREATiONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:

	ShrubberyCreationForm( std::string name );
	~ShrubberyCreationForm( void );

	void execute( Bureaucrat const & executor ) const;
private:

	ShrubberyCreationForm( void );
};


#endif
