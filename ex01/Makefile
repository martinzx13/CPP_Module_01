#Name.
NAME:= zombie

#Compiler.
CPP:= g++
CPP_FLAGS:= -Wall -Wextra -Werror -std=c++98 -g

#Files.

SRC:= main.cpp \
		Zombie.cpp\
		zombieHorde.cpp \

OBJ:= $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CPP_FLAGS) -o $(NAME) $(OBJ)

%.o:%.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY:clean fclean re
