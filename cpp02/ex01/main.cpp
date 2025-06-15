#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	// Default Constructor called
	Fixed const b( 10 );
	// Int Constructor called
	Fixed const c( 42.42f );
	// Float Constructor called
	Fixed const d( b );
	// Copy Construtor Called	
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}

// * in this exercises:
// * float binary is learned
// * casting is learned
// * rounding a float
// * converting an int to fixed point by << by fractional factor
// * converting a float to fixed point by rounding it then * by 1 << fractional fator
