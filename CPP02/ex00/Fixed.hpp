#ifndef Fixed_HPP
# define Fixed_HPP

#include <iostream>

class Fixed
{

public:

	Fixed(void);
	Fixed(const Fixed&);
	Fixed& operator=(const Fixed&);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	~Fixed(void);

private:
	int _value;
	static const int _bits = 8;
};


#endif