/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:27:36 by fsalimba          #+#    #+#             */
/*   Updated: 2024/01/22 11:27:39 by fsalimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug( void )
{
    std::cout << "[ DEBUG ]\n\"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger.\nI really do!\"\n" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "[ INFO ]\n\"I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!\"\n" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "[ WARNING ]\n\"I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\"\n" << std::endl;
}

void    Harl::error( void )
{
    std::cout << "[ ERROR ]\n\"This is unacceptable!\nI want to speak to the manager now.\"\n" << std::endl;
}

void Harl::complain( std::string level )
{
    void(Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string arr[] = {"debug", "info", "warning", "error"};
    int i = 0;
    while (i < 4)
    {
        if(level == arr[i])
        {
            (this->*ptr[i])();
            break;
        }
        i++;
    }
}