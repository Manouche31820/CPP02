#ifndef Fixed_HPP
# define Fixed_HPP

#include <iostream>
#include <cmath>

class Fixed
{

public:

	Fixed(void);
	Fixed(const Fixed&);
	Fixed(const int);
	Fixed(const float);
	Fixed& operator=(const Fixed&);
	float toFloat( void ) const;
	int toInt( void ) const;
	~Fixed(void);

private:
	int _value;
	static const int _bits = 8;
};

std::ostream& operator<<(std::ostream&, const Fixed&);

#endif