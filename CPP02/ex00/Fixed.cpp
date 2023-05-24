#include "Fixed.hpp"

	Fixed::Fixed(void):_value(0){
		std::cout << "Default constructor called" << std::endl;
	}

	Fixed::Fixed(const Fixed& a){
		std::cout << "Copy constructor called" << std::endl;
		*this = a;
	}

	Fixed& Fixed::operator=(const Fixed& b){
		if (this != &b)
			this->_value = b._value;
		std::cout << "Copy assignment operator called" << std::endl;
		return (*this);
	}

	int Fixed::getRawBits( void ) const{
		std::cout << "getRawBits member function called" << std::endl;
		return (this->_value);
	}

	void Fixed::setRawBits( int const raw ){
		this->_value = raw;
	}

	Fixed::~Fixed(void){std::cout << "Destructor called" << std::endl;}