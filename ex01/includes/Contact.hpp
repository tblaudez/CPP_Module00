/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 16:00:43 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/17 17:50:39 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact
{
public:
	//Member Attributes
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	login;
	std::string	postalAddress;
	std::string	emailAddress;
	std::string	phoneNumber;
	std::string	birthdayDate;
	std::string	favoriteMeal;
	std::string	underwearColor;
	std::string	darkestSecret;
	
	//Constructors and Destructor
	Contact( void );
	~Contact( void );

	//Member methods
	void	displayContact( void ) const;
};

