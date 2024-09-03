#Name

NAME := harl

CPP := g++
CPP_FLAGS := -Wall -Wextra -Werror -std=c++98

SRC:= main.cpp\
	Harl.cpp

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

re:clean fclean all

.PHONY: all clean fclean re