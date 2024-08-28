#Name of the exec
NAME := zombie

#Rules for compilation
CPP:= g++
CPP_FLAGS := -Wall -Wextra -Werror -std=c++98 -g

#Sources of the program.
SRC:= main.cpp \
	  newZombie.cpp \
	  randomChump.cpp \
	  Zombie.cpp

OBJ:= $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CPP_FLAGS) -o $(NAME) $(OBJ)

%.o:%.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
