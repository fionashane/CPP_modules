/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:45:03 by fsalimba          #+#    #+#             */
/*   Updated: 2024/01/30 14:45:06 by fsalimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private:
        int value;
        static int const fractionalBits = 8;
    public:
        // Constructors
        Fixed( void );
        Fixed( const Fixed &other );
        
        // Destructor
        ~Fixed( void );

        // Getter and Setter for Raw Bits
        int getRawBits( void ) const;
        void setRawBits( int const raw );

        // Assignment Operator Overloading
        Fixed &operator=( const Fixed &other );
};