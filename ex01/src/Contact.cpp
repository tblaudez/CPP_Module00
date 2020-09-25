/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 16:20:57 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/17 17:53:31 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact( void ) : firstName(""), lastName(""), nickname(""), login(""),
	postalAddress(""), emailAddress(""), phoneNumber(""), birthdayDate(""), 
	favoriteMeal(""), underwearColor(""), darkestSecret("")
{
	
}

Contact::~Contact( void )
{
	
}

void	Contact::displayContact( void ) const {
	std::cout << "First name : " << this->firstName << std::endl;
	std::cout << "Last name : " <<  this->lastName << std::endl;
	std::cout <<  "Nickname : " << this->nickname << std::endl;
	std::cout <<  "Login : " << this->login << std::endl;
	std::cout <<  "Postal address : " << this->postalAddress << std::endl;
	std::cout <<  "Email address : " << this->emailAddress << std::endl;
	std::cout <<  "Phone number : " << this->phoneNumber << std::endl;
	std::cout <<  "Birthday date : " << this->birthdayDate << std::endl;
	std::cout <<  "Favorite meal : " << this->favoriteMeal << std::endl;
	std::cout <<  "Underwear color : " << this->underwearColor << std::endl;
	std::cout <<  "Darkest secret : " << this->darkestSecret << std::endl;
}