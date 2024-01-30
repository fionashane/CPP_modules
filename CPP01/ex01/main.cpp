/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:30:49 by fsalimba          #+#    #+#             */
/*   Updated: 2024/01/19 13:30:49 by fsalimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *arrZombie;
    int n = 8;
    int i = 0;
    
    arrZombie = zombieHorde(n, "Arrgghh");
    while (i < n)
    {
        arrZombie[i].announce();
        i++;
    }
    delete[] arrZombie;
    return 0;
}