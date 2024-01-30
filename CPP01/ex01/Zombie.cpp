/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:29:20 by fsalimba          #+#    #+#             */
/*   Updated: 2024/01/19 13:29:20 by fsalimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "zombie";
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie() {}

void Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}