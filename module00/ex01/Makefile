SRC = phonebook.cpp contact.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo
	@echo "Welcome to phonebook 42!"
	@echo
	@echo "The executable is ./phonebook"
	@echo
	@echo "Available commands:"
	@echo "1. ADD: Add a new contact."
	@echo "2. SEARCH: View and search contacts."
	@echo "3. EXIT: Exit the program."
	@echo

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SILENT:
