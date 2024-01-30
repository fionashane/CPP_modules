/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:02:46 by fsalimba          #+#    #+#             */
/*   Updated: 2023/12/19 14:02:46 by fsalimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include <iostream>

class PhoneBook {
private:
	Contact	contacts[8];
	int 	size;
	int 	index;
public:
	PhoneBook() : size (0), index (0) {}
	void	print_name(std::string str) const;
	int     is_valid_number(std::string number) const;
	int 	get_size(void) const;
	void	perform_add(void);
	void	perform_search(std::string input);
	void	add_contact(std::string data[5]);
	void	display_contact(int i) const;
	void	display_phonebook(void) const;
};
