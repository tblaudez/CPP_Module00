/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:19:04 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/17 17:12:58 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
	std::string sentence = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	
	if (argc > 1) {
		sentence = argv[1];
		for (int i = 2; i<argc; i++) {
			sentence += argv[i];
		}
		for (std::string::iterator it = sentence.begin(); it != sentence.end(); it++) {
			*it = toupper(*it);
		}
	}

	std::cout << sentence << std::endl;

	return 0;
}
