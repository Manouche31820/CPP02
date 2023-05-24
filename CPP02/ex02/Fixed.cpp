#include "Fixed.hpp"

	Fixed::Fixed(void):_value(0){
	}

	Fixed::Fixed(const Fixed& a){
		*this = a;
	}

	Fixed::Fixed(const int a){
		this->_value = a * (1 << _bits);
	}

	Fixed::Fixed(const float a){
		this->_value = roundf(a * (1 << _bits));
	}

	std::ostream& operator<<(std::ostream& str, const Fixed& a){
		str << a.toFloat();
		return(str);
	}

	Fixed& Fixed::operator=(const Fixed& b){
		if (this != &b)
			this->_value = b._value;
		return (*this);
	}

	float Fixed::toFloat( void ) const {
		float a = this->_value;
		return (a / (1 << _bits));
	}

	int Fixed::toInt( void ) const {
		return(this->_value / (1 << _bits));
	}

	bool Fixed::operator>(const Fixed& a) const {
		if (this->_value > a._value)
			return 1;
		else
			return 0;
	}

	bool Fixed::operator<(const Fixed& a) const {
		if (this->_value < a._value)
			return 1;
		else
			return 0;
	}

	bool Fixed::operator<=(const Fixed& a) const {
		if (this->_value <= a._value)
			return 1;
		else
			return 0;
	}

	bool Fixed::operator>=(const Fixed& a) const {
		if (this->_value >= a._value)
			return 1;
		else
			return 0;
	}

	bool Fixed::operator==(const Fixed& a) const {
		if (this->_value == a._value)
			return 1;
		else
			return 0;
	}	

	bool Fixed::operator!=(const Fixed& a) const {
		if (this->_value != a._value)
			return 1;
		else
			return 0;
	}

	Fixed Fixed::operator+(const Fixed& a) const {
		return (this->toFloat() + a.toFloat());
	}

	Fixed Fixed::operator-(const Fixed& a) const {
		return (this->toFloat() - a.toFloat());
	}

	Fixed Fixed::operator*(const Fixed& a) const {
		return (this->toFloat() * a.toFloat());
	}

	Fixed Fixed::operator/(const Fixed& a) const {
		return (this->toFloat() / a.toFloat());
	}

	Fixed Fixed::operator++(int){
		Fixed a;
		a = *this;
		this->_value++;
		return(a);
	}

	Fixed& Fixed::operator++(void){
		this->_value++;
		return(*this);
	}

	Fixed& Fixed::operator--(void){
		this->_value--;
		return(*this);
	}

	Fixed Fixed::operator--(int){
		Fixed a;
		a = *this;
		this->_value--;
		return(a);
	}

	Fixed Fixed::min(const Fixed& a, const Fixed& b){
		if (a < b)
			return a;
		return b;
	}

	Fixed Fixed::min(Fixed& a, Fixed& b){
		if (a < b)
			return a;
		return b;		
	}

	Fixed Fixed::max(const Fixed& a, const Fixed& b){
		if (a > b)
			return a;
		return b;
	}

	Fixed Fixed::max(Fixed& a, Fixed& b){
		if (a > b)
			return a;
		return b;		
	}

	Fixed::~Fixed(void){
	}