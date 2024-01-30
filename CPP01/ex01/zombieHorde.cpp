/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:32:27 by fsalimba          #+#    #+#             */
/*   Updated: 2024/01/19 13:32:27 by fsalimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *arrZombie = new Zombie[N];
    
    for(int i = 0; i < N; i++)
    {
        arrZombie[i].setName(name);
    }
    return arrZombie;
}