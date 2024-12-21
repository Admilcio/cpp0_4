SRCS			= main.cpp \
Zombie.cpp \
zombieHorde.cpp \

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= zombie

all:			$(NAME)

$(NAME):		$(OBJS) Zombie.hpp
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS) -I Zombie.hpp

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re test

.SILENT: