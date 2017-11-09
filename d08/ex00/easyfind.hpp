
#ifndef EASTFIND_HPP
# define EASTFIND_HPP

#include <exception>

template < typename T >
typename T::iterator easyfind( T & cont, int val ) {

	typename T::iterator it = cont.begin();

	while ( it != cont.end() )
	{
		if (*it == val)
			return it;
		it++;
	}
	throw std::exception();
	return ( cont.end() );
}

#endif
