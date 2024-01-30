/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalimba <fsalimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:19:52 by fsalimba          #+#    #+#             */
/*   Updated: 2024/01/19 15:19:52 by fsalimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void generate_new_str(std::string& str, std::string s1, std::string s2)
{
    size_t pos = str.find(s1);

    while (pos < str.length())
    {
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos = str.find(s1, pos + s2.length());
    }
}

void    replace_words(std::string fileName, std::string s1, std::string s2)
{
    std::string line;
    std::string str;
    
    std::ifstream infile(fileName);
    if(infile.is_open())
    {
        std::ofstream outfile(fileName + ".replace");
        while (getline(infile, line))
        {
            str += line;
            if(!infile.eof())
                str += '\n';
        }
        generate_new_str(str, s1, s2);
        outfile << str;
        outfile.close();
        infile.close();
    }
    else
        std::cout << "Can't Open File" << std::endl;
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Invalid Arguments" << std::endl;
        return 1;
    }
    else
        replace_words(av[1], av[2], av[3]);
    return 0;
}