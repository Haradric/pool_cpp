
#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <iostream>

template< typename T >
class Array {

public:

	Array<T>( void ) {

		_size = 0;
		_arr = new T[0];
	}

	Array<T>( unsigned int size ) : _size( size ), _arr( new T[size]){

	}

	Array<T>( Array<T> const & target ) {

		*this = target;
	}

	~Array<T>( void ) {

		delete [] _arr;
	}

	Array<T> & operator=( Array<T> const & target ) {

		if ( this == &target )
			return *this;

		delete [] _arr;
		_size = target._size;
		
		_arr = new T[_size];
		for ( size_t i = 0; i < _size; i++ ) {
			_arr[i] = target._size[i];
		}
		return *this;
	}

	T & operator[]( unsigned int i ) {

		if ( !_arr || i >= _size )
			throw std::out_of_range( "no such an element" );
		return _arr[i];
	}

	unsigned int size( void ) {

		return _size;
	}

private:

	unsigned int _size;
	T * _arr;
	
};

#endif
