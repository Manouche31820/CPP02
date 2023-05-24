#include "Fixed.hpp"
#include <iostream>

// int main() {
//     Fixed a(3.14159f);
//     Fixed b(2.71828f);
    
//     if (a > b) {
//         std::cout << "a is greater than b" << std::endl;
//     } else {
//         std::cout << "a is not greater than b" << std::endl;
//     }

//    	if (a < b) {
//         std::cout << "a is not greater than b" << std::endl;
//     } else {
//         std::cout << "a is greater than b" << std::endl;
//     }

//     if (a >= b) {
//         std::cout << "a is greater than b" << std::endl;
//     } else {
//         std::cout << "a is not greater than b" << std::endl;
//     }

//    	if (a <= b) {
//         std::cout << "a is not greater than b" << std::endl;
//     } else {
//         std::cout << "a is greater than b" << std::endl;
//     }
    
//     if (a == b) {
//         std::cout << "a is equal to b" << std::endl;
//     } else {
//         std::cout << "a is is not equal b" << std::endl;
//     }
    
//     if (a != b) {
//         std::cout << "a is not equal to b" << std::endl;
//     } else {
//         std::cout << "a is equal b" << std::endl;
//     }
//     std::cout << a << std::endl;
//     std::cout << b << std::endl;
// std::cout << a + b << std::endl;
// std::cout << a - b << std::endl;
// std::cout << a * b << std::endl;
// std::cout << a / b << std::endl;

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

return 0;
}