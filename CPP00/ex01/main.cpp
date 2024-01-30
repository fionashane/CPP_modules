/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:20:44 by fsalimba          #+#    #+#             */
/*   Updated: 2023/12/19 14:20:44 by fsalimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string	input;

	while (1)
	{
		std::cout << "\nPhoneBook> ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			phonebook.perform_add();
		}
		else if (input == "SEARCH")
		{
			phonebook.perform_search(input);
		}
		else if (input == "EXIT")
			break;
		else
			std::cout << "Command not found" << std::endl;
	}
}