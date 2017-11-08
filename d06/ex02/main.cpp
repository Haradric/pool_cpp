
#include <iostream>

class Base				{ public: virtual ~Base( void ) {}; };
class A : public Base	{};
class B : public Base	{};
class C : public Base	{};

Base * generate( void ) {

	switch( rand() % 3 )
	{
		case 0:
			std::cout << "created instance of A" << std::endl;
			return new A();
		case 1:
			std::cout << "created instance of B" << std::endl;
			return new B();
		case 2:
			std::cout << "created instance of C" << std::endl;
			return new C();
	}
	return NULL;
}

void identify_from_pointer( Base * p ) {

	if ( dynamic_cast<A *>( p ) )
		std::cout << "it is A" << std::endl;
	else if ( dynamic_cast<B *>( p ) )
		std::cout << "it is B" << std::endl;
	else if ( dynamic_cast<C *>( p ) )
		std::cout << "it is C" << std::endl;
}

void identify_from_reference( Base & p ) {

	try {
		A & inst = dynamic_cast<A &>( p );
		(void)inst;
		std::cout << "it is A" << std::endl;
	}
	catch( std::bad_cast &bc ) {
	}

	try {
		B & inst = dynamic_cast<B &>( p );
		(void)inst;
		std::cout << "it is B" << std::endl;
	}
	catch( std::bad_cast &bc ) {
	}

	try {
		C & inst = dynamic_cast<C &>( p );
		(void)inst;
		std::cout << "it is C" << std::endl;
	}
	catch( std::bad_cast &bc ) {
	}
}

int main( void ) {

	srand( time( NULL ) );

	Base * inst = generate();

	identify_from_pointer( inst );
	identify_from_reference( *inst );
}