/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 21:22:06 by pruiz-ca          #+#    #+#             */
/*   Updated: 2021/08/07 00:09:00 by pruiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	displayError( std::string errmsg )
{
	std::cout << "Error:" << std::endl;
	std::cout << errmsg << std::endl;
	exit (1);
}

void	checkInput( std::string filename, std::string s1, std::string s2)
{
	if (filename.empty() || s1.empty() || s2.empty())
		displayError("Arguments can't be empty");
	if (s1 == s2)
		displayError("Can't replace if both strings are the same");
}

void	replaceString( std::string filename, std::string s1, std::string s2)
{
	std::ifstream			ifs;
	std::ofstream			ofs;
	std::string				line;
	size_t					matchPos;

	ifs.open(filename);
	if (!ifs.is_open())
		displayError("Input file couldn't be opened");
	ofs.open(filename.append(".replace"));
	if (!ofs.is_open())
		displayError("Output file couldn't be created");
	while (getline(ifs, line))
	{
		while ((matchPos = line.find(s1)) != std::string::npos)
		{
			line.erase(matchPos, s1.length());
			line.insert(matchPos, s2);
		}
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
}

int	main( int argc, char** argv )
{
	if (argc != 4)
		displayError("Usage: <filename> <stringtoreplace> <stringtoreplacewith>");
	checkInput(argv[1], argv[2], argv[3]);
	replaceString(argv[1], argv[2], argv[3]);
	return (0);
}
