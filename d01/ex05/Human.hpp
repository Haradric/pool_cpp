
#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>

# include "Brain.hpp"

class Human {

public:	
	std::string identify(void);
	Brain const	&getBrain(void) const;

private:
	Brain const _brain;

};

#endif
