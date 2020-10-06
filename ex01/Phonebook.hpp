/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 12:45:22 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/06 14:39:05 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Contact.hpp"

class Phonebook {

public:

	Phonebook();
	~Phonebook();

	void	add_contact();
	void	search_contact() const;

private:

	std::string const	_format_row(std::string const row) const;

	Contact				_contactList[8];
	unsigned int		_contactListSize;

};
