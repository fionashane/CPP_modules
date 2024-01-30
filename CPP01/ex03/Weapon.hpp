/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:36:17 by fsalimba          #+#    #+#             */
/*   Updated: 2024/01/19 14:36:17 by fsalimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        const std::string   getType();
        void    setType(std::string type);
    private:
        std::string type;
};