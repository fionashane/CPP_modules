/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:46:29 by fsalimba          #+#    #+#             */
/*   Updated: 2024/01/30 14:46:32 by fsalimba         ###   ########.fr       */
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
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);