/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 16:33:40 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/17 18:00:16 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "Contact.hpp"

static void	search_contact(Contact contacts[8], int numberOfContacts)
{
	if (numberOfContacts == 0) {
		std::cout << "Sorry, your contact list is empty." << std::endl;
		return;
	}
	
	for (int i = 0; i<numberOfContacts; i++) {
		std::cout << std::setw(10) << i+1 << "|";
		std::cout << std::setw(10) << (contacts[i].firstName.length() > 10 ? contacts[i].firstName.substr(0, 9) + '.' : contacts[i].firstName) << "|";
		std::cout << std::setw(10) << (contacts[i].lastName.length() > 10 ? contacts[i].lastName.substr(0, 9) + '.' : contacts[i].lastName) << "|";
		std::cout << std::setw(10) << (contacts[i].nickname.length() > 10 ? contacts[i].nickname.substr(0, 9) + '.' : contacts[i].nickname) << "|" << std::endl;
	}

	
	std::string str_index;
	int			index;
	
	std::cout << "Choose the index of the contact you want to see : ";
	std::getline(std::cin, str_index);
	std::istringstream(str_index) >> index;

	if (index > numberOfContacts or index < 1) {
		index = numberOfContacts;
	}
	
	contacts[index-1].displayContact();
}

static void	add_contact(Contact &contact)
{
	std::cout << "What is your contact first name ? ";
	std::getline(std::cin, contact.firstName);
	std::cout << "What is your contact last name ? ";
	std::getline(std::cin, contact.lastName);
	std::cout << "What is your contact nickname ? ";
	std::getline(std::cin, contact.nickname);
	std::cout << "What is your contact login ? ";
	std::getline(std::cin, contact.login);
	std::cout << "What is your contact postal address ? ";
	std::getline(std::cin, contact.postalAddress);
	std::cout << "What is your contact email address ? ";
	std::getline(std::cin, contact.emailAddress);
	std::cout << "What is your contact phone number ? ";
	std::getline(std::cin, contact.phoneNumber);
	std::cout << "When is your contact birthday ? ";
	std::getline(std::cin, contact.birthdayDate);
	std::cout << "What is your contact favorite meal ? ";
	std::getline(std::cin, contact.favoriteMeal);
	std::cout << "What is your contact underwear color ( ͡° ͜ʖ ͡°) ? ";
	std::getline(std::cin, contact.underwearColor);
	std::cout << "What is your contact darkest secret ? ";
	std::getline(std::cin, contact.darkestSecret);

	std::cout << "All Done ! Contact added." << std::endl;
}

int main(void) 
{
	Contact		contacts[8];
	std::string	input;
	int			numberOfContacts = 0;

	
	std::cout << "Welcome to the 80' ! Have a look at this Amazing Phonebook Software !" << std::endl;
	
	while (true) {
		std::cout << "Please enter a command (ADD|SEARCH|EXIT) : ";
		std::getline(std::cin, input);

		if (input == "EXIT") {
			std::cout << "Bu-bye!" << std::endl;
			return 0;
		}
		else if (input == "ADD") {
			add_contact(contacts[numberOfContacts]);
			numberOfContacts += 1;
		}
		else if (input == "SEARCH") {
			search_contact(contacts, numberOfContacts);
		}
		else {
			continue;
		}
	}
	return 0;
}
