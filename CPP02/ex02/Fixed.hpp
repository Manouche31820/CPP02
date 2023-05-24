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
	bool operator>(const Fixed&) const;
	bool operator<(const Fixed&) const;
	bool operator>=(const Fixed&) const;
	bool operator<=(const Fixed&) const;
	bool operator==(const Fixed&) const;
	bool operator!=(const Fixed&) const;
	Fixed operator+(const Fixed&) const;
	Fixed operator-(const Fixed&) const;
	Fixed operator*(const Fixed&) const;
	Fixed operator/(const Fixed&) const;
	Fixed operator++(int);
	Fixed& operator++(void);
	Fixed operator--(int);
	Fixed& operator--(void);
	static Fixed min(const Fixed& a, const Fixed& b);
	static Fixed min(Fixed& a, Fixed& b);
	static Fixed max(const Fixed& a, const Fixed& b);
	static Fixed max(Fixed& a, Fixed& b);

	float toFloat( void ) const;
	int toInt( void ) const;
	~Fixed(void);

private:
	int _value;
	static const int _bits = 8;
};

std::ostream& operator<<(std::ostream&, const Fixed&);

#endif