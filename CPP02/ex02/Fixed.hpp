/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:16:32 by fsalimba          #+#    #+#             */
/*   Updated: 2024/01/29 14:16:32 by fsalimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        static int const fractionalBits = 8;
    public:
        // Constructors
        Fixed( void );
        Fixed( const Fixed &other );
        Fixed( const int intValue );
        Fixed( const float floatValue );
        
        // Destructor
        ~Fixed( void );

        // Conversion Functions
        int toInt( void ) const;
        float toFloat( void ) const;

        // Getter and Setter for Raw Bits
        int getRawBits( void ) const;
        void setRawBits( int const raw );

        // Assignment Operator Overloading
        Fixed &operator=( const Fixed &other );

        // Arithmetic Operators Overloading
        Fixed operator+(const Fixed &other);
        Fixed operator-(const Fixed &other);
        Fixed operator*(const Fixed &other);
        Fixed operator/(const Fixed &other);

        // Comparison Operators Overloading
        bool operator>(const Fixed &other);
        bool operator<(const Fixed &other);
        bool operator>=(const Fixed &other);
        bool operator<=(const Fixed &other);
        bool operator==(const Fixed &other);
        bool operator!=(const Fixed &other);

        // Increment and Decrement Operators Overloading
        Fixed &operator++(void);
        Fixed &operator--(void);
        Fixed operator--(int);
        Fixed operator++(int);

        // Static Member Functions for min and max
        static Fixed &min(Fixed &nbr1, Fixed &nbr2);
        static const Fixed &min(const Fixed &nbr1, const Fixed &nbr2);
        static Fixed &max(Fixed &nbr1, Fixed &nbr2);
        static const Fixed &max(const Fixed &nbr1, const Fixed &nbr2);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);