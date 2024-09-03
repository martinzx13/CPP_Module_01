
NAME:= violence

CPP:= g++
CPP_FLAGS:= -Wall -Wextra -Werror -std=c++98 -g

SRC:= main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp

OBJ := $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CPP_FLAGS) -o $(NAME) $(OBJ)

%.o:%.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: clean all

.PHONY:clean fclean re all