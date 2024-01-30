/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:40:20 by fsalimba          #+#    #+#             */
/*   Updated: 2024/01/19 14:40:20 by fsalimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB();
        HumanB(std::string name);
        ~HumanB();
        void    setWeapon(Weapon *weapon);
        void    attack();
    private:
        std::string name;
        Weapon  *weapon;    
};