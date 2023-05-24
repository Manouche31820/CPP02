#include "Fixed.hpp"

	Fixed::Fixed(void):_value(0){
		std::cout << "Default constructor called" << std::endl;
	}

	Fixed::Fixed(const Fixed& a){
		std::cout << "Copy constructor called" << std::endl;
		*this = a;
	}

	Fixed::Fixed(const int a){
		std::cout << "Int constructor called" << std::endl;
		this->_value = a * (1 << _bits);
	}

	Fixed::Fixed(const float a){
		std::cout << "Float constructor called" << std::endl;
		this->_value = roundf(a * (1 << _bits));
	}

	std::ostream& operator<<(std::ostream& str, const Fixed& a){
		str << a.toFloat();
		return(str);
	}

	Fixed& Fixed::operator=(const Fixed& b){
		if (this != &b)
			this->_value = b._value;
		std::cout << "Copy assignment operator called" << std::endl;
		return (*this);
	}

	float Fixed::toFloat( void ) const {
		float a = this->_value;
		return (a / (1 << _bits));
	}

	int Fixed::toInt( void ) const {
		return(this->_value / (1 << _bits));
	}

	Fixed::~Fixed(void){std::cout << "Destructor called" << std::endl;}