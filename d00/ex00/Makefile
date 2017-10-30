
CC = clang++
NAME = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o:		%.cpp
			$(CC) $(FLAGS) -o $@ -c $<

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY : all clean fclean re
