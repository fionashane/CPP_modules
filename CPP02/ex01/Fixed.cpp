/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:52:37 by fsalimba          #+#    #+#             */
/*   Updated: 2024/01/23 18:52:37 by fsalimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &other )
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = other.getRawBits();
}

Fixed::Fixed( const int intValue )
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (intValue << Fixed::fractionalBits);
}

Fixed::Fixed (const float floatValue )
{
	std::cout << "Float constructor called" << std::endl;
	this->value = static_cast<int>(std::roundf(floatValue * (1 << Fixed::fractionalBits)));
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const
{
	return (this->value >> Fixed::fractionalBits);
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->value) / (1 << Fixed::fractionalBits));
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits( int const raw )
{
    this->value = raw;
}

Fixed &Fixed::operator=( const Fixed &other )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = other.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return os;
}