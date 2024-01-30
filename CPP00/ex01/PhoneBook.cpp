/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:00:31 by fsalimba          #+#    #+#             */
/*   Updated: 2023/12/19 14:00:31 by fsalimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::print_name(std::string str) const
{
	unsigned int j;

	j = 0;
	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		j = 0;
		while (j++ < 10 - str.length())
			std::cout << " ";
		std::cout << str;
	}
}

int      PhoneBook::is_valid_number(std::string number) const
{
        int     i;

        i = 0;
        while (number[i])
        {
                if (number[i] == ' ')
                {
                        i++;
                        continue;
                }
                if (number[i] < '0' || number[i] > '9')
                        return (0);
                i++;
        }
        return (1);
}

int 	PhoneBook::get_size() const
{
	return (size);
}

void	PhoneBook::perform_add()
{
	std::string	data[5];
	
	std::cout << "Please Enter Information..." << std::endl;
	std::cout << "First Name: ";
	std::getline(std::cin, data[0]);
	std::cout << "Last Name: ";
	std::getline(std::cin, data[1]);
	std::cout << "Nickname: ";
	std::getline(std::cin, data[2]);
	do
	{
		std::cout << "Phone Number: ";
		std::getline(std::cin, data[3]);
		if (is_valid_number(data[3]))
			break;
		std::cout << "Please Enter Valid Number..." << std::endl;
	} while (!is_valid_number(data[3]));
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, data[4]);
	add_contact(data);
	std::cout << "Contact Successully Added" << std::endl;
}

void	PhoneBook::perform_search(std::string input)
{
	int search_index;

	display_phonebook();
	std::cout << "\nIndex: ";
	std::cin >> search_index;
	if (std::cin.fail() || search_index < 0
		|| search_index >= get_size())
		std::cout << "Index not found!" << std::endl;
	else
		display_contact(search_index);
	std::cin.clear();
	std::getline(std::cin, input);
}

void	PhoneBook::add_contact(std::string data[5])
{
	int	last_index;

	last_index = index;
	contacts[last_index].set_firstname(data[0]);
	contacts[last_index].set_lastname(data[1]);
	contacts[last_index].set_nickname(data[2]);
	contacts[last_index].set_number(data[3]);
	contacts[last_index].set_secret(data[4]);
	index = (last_index + 1) % 8;

	if (size < 8)
		size++;
}

void	PhoneBook::display_contact(int i) const
{
	std::cout << "First Name: " << contacts[i].get_firstname() << std::endl;
	std::cout << "Last Name: " << contacts[i].get_lastname() << std::endl;
	std::cout << "Nickname: " << contacts[i].get_nickname() << std::endl;
	std::cout << "Phone Number: " << contacts[i].get_number() << std::endl;
	std::cout << "Darkest Secret: " << contacts[i].get_secret() << std::endl;
}

void	PhoneBook::display_phonebook() const
{
	int i;

	i = 0;
	while (i < size)
	{
		std::cout  << "|         ";
		std::cout << i;
		std::cout  << "|";
		print_name(contacts[i].get_firstname());
		std::cout  << "|";
		print_name(contacts[i].get_lastname());
		std::cout  << "|";
		print_name(contacts[i].get_nickname());
		std::cout  << "|"  << std::endl;
		i++;
	}
}
