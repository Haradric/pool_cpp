
#include <sstream>
#include <iostream>

#include "Brain.hpp"

std::string Brain::identify(void) const {
	std::stringstream	stream;

	stream << this;
	return (stream.str());
}