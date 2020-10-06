/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 16:33:40 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/06 14:44:33 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


#include <iostream>


int main(void)
{
	Phonebook	phonebook;
	std::string	input;


	while (true) {
		std::cout << "Please enter a command (ADD|SEARCH|EXIT) : ";
		std::getline(std::cin, input);

		if (input == "EXIT") {
			return 0;
		}
		else if (input == "ADD") {
			phonebook.add_contact();
		}
		else if (input == "SEARCH") {
			phonebook.search_contact();
		}
		else {
			std::cerr << "Command not found" << std::endl;
			continue;
		}
	}
	return 0;
}
