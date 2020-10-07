/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 12:48:12 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 10:11:56 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


#include <sstream> // istringstream
#include <iostream> // cout
#include <iomanip> // setw


Phonebook::Phonebook() : _contactListSize(0) {

}


Phonebook::~Phonebook() {

}


void	Phonebook::add_contact() {

	if (this->_contactListSize == 8) {
		std::cerr << "Your phonebook can only store 8 contacts" << std::endl;
		return;
	}

	std::string	input;

	std::cout << "What is your contact first name ? ";
	std::getline(std::cin, input);
	this->_contactList[this->_contactListSize].setFirstName(input);
	std::cout << "What is your contact last name ? ";
	std::getline(std::cin, input);
	this->_contactList[this->_contactListSize].setLastName(input);
	std::cout << "What is your contact nickname ? ";
	std::getline(std::cin, input);
	this->_contactList[this->_contactListSize].setNickname(input);
	std::cout << "What is your contact login ? ";
	std::getline(std::cin, input);
	this->_contactList[this->_contactListSize].setLogin(input);
	std::cout << "What is your contact postal address ? ";
	std::getline(std::cin, input);
	this->_contactList[this->_contactListSize].setPostalAddress(input);
	std::cout << "What is your contact email address ? ";
	std::getline(std::cin, input);
	this->_contactList[this->_contactListSize].setEmailAddress(input);
	std::cout << "What is your contact phone number ? ";
	std::getline(std::cin, input);
	this->_contactList[this->_contactListSize].setPhoneNumber(input);
	std::cout << "When is your contact birthday ? ";
	std::getline(std::cin, input);
	this->_contactList[this->_contactListSize].setBirthdayDate(input);
	std::cout << "What is your contact favorite meal ? ";
	std::getline(std::cin, input);
	this->_contactList[this->_contactListSize].setFavoriteMeal(input);
	std::cout << "What is your contact underwear color ( ͡° ͜ʖ ͡°) ? ";
	std::getline(std::cin, input);
	this->_contactList[this->_contactListSize].setUnderwearColor(input);
	std::cout << "What is your contact darkest secret ? ";
	std::getline(std::cin, input);
	this->_contactList[this->_contactListSize].setDarkestSecret(input);

	this->_contactListSize++;
	std::cout << "All Done ! Contact added." << std::endl;
}


void				Phonebook::search_contact() const {

	if (this->_contactListSize == 0) {
		std::cout << "Sorry, your contact list is empty." << std::endl;
		return;
	}

	for (unsigned int i=0; i < this->_contactListSize; i++) {
		std::cout << std::setw(10) << i+1 << "|";
		std::cout << std::setw(10) << this->_format_row(this->_contactList[i].getFirstName()) << "|";
		std::cout << std::setw(10) << this->_format_row(this->_contactList[i].getLastName()) << "|";
		std::cout << std::setw(10) << this->_format_row(this->_contactList[i].getNickname()) << std::endl;
	}


	std::string			input;
	unsigned int		index;

	std::cout << "Choose the index of the contact you want to see : ";
	std::getline(std::cin, input);
	std::istringstream	iss(input);
	iss >> index;

	index = (index-1) % this->_contactListSize;

	this->_contactList[index].display();
}


std::string const	Phonebook::_format_row(std::string const row) const {

	return row.size() > 10 ? row.substr(0, 9) + '.' : row;
}
