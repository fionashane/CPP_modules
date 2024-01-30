/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:41:41 by fsalimba          #+#    #+#             */
/*   Updated: 2024/01/19 14:41:41 by fsalimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon() {}

const std::string   Weapon::getType()
{
    return this->type;
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}