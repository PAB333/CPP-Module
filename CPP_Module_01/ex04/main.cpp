/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 23:05:54 by pibreiss          #+#    #+#             */
/*   Updated: 2026/02/19 17:04:42 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

std::string	find_and_replace_s1(std::string content, std::string s1, std::string s2)
{
	std::string	result;
	size_t		i = 0;
	size_t		s1pos;

	if (s1.empty())
		return (content);
	while ((s1pos = content.find(s1, i)) != std::string::npos)
	{
		result.append(content, i, s1pos - i);
		result.append(s2);
		i = s1pos + s1.length();
	}
	result.append(content, i, content.length() - i);
	return (result);
}

std::string	read_file(char *filename)
{
	std::ifstream ifs(filename);
	if (!ifs.is_open())
	{
		std::cout << "The file cannot be opened" << std::endl;
		return ("");
	}
	std::stringstream	buffer;
	buffer << ifs.rdbuf();
	std::string	content = buffer.str();
	ifs.close();
	return (content);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Incorrect parameter count" << std::endl;
		return (1);
	}
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	std::string content = read_file(argv[1]);
	if (content.empty())
		return (1);
	std::string ContentEdit = find_and_replace_s1(content, s1, s2);
	std::string	NewFilename = std::string(argv[1]) + ".replace";
	std::ofstream outfile(NewFilename.c_str());
	if (!outfile.is_open())
	{
		std::cout << "The output file cannot be created" << std::endl;
		return (1);
	}
	outfile << ContentEdit;
	outfile.close();
	return (0);
}
