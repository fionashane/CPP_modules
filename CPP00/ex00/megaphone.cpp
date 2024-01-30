/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:49:03 by fsalimba          #+#    #+#             */
/*   Updated: 2023/12/19 14:49:03 by fsalimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

void	ft_toupper(char **str)
{
	int i;

	i = 0;
	while ((*str)[i])
	{
		if ((*str)[i] >= 'a' && (*str)[i] <= 'z')
			(*str)[i] -= 32;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)		
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (argv[i])
		{
			ft_toupper(&argv[i]);
			std::cout << argv[i];
			i++;
		}
		std::cout << "\n";
	}
	return (0);
}