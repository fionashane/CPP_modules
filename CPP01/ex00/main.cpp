/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:20:05 by fsalimba          #+#    #+#             */
/*   Updated: 2024/01/19 13:20:05 by fsalimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *heapZombie = newZombie("Zombie1");
    heapZombie->announce();
    randomChump("Zombie2");
    
    delete heapZombie;
    return (0);
}