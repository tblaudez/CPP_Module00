/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:19:04 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/06 12:28:52 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // cout
#include <cctype> // touper


int main(int argc, char const *argv[]) {

	std::string	str;

	if (argc > 1) {

		// Concatenate argv into a string
		str = argv[1];
		for (int i=2; i<argc; i++) {
			str += argv[i];
		}

		// Using an iterator, apply toupper to every character
		for (std::string::iterator it=str.begin(); it!=str.end(); it++) {
			*it = toupper(*it);
		}

	}
	else {
		str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}

	std::cout << str << std::endl;

	return 0;
}
