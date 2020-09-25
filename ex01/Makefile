# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tblaudez <tblaudez@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/17 14:41:30 by tblaudez      #+#    #+#                  #
#    Updated: 2020/09/17 16:38:19 by tblaudez      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME=phonebook

SRC= src/phonebook.cpp src/Contact.cpp
OBJ= $(SRC:%.cpp=%.o)
INCLUDE_DIR = -I includes/

CC= /usr/bin/clang++
CFLAGS= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDE_DIR) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDE_DIR) -c $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

run: all
	./$(NAME)

.PHONY: all clean fclean re run
