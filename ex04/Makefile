
CPP:= g++
CPP_FLAGS:= -Wall -Wextra -Werror

NAME:= file

SRC:= main.cpp \
		fileReplace.cpp

OBJ:= $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CPP_FLAGS) -o $(NAME) $(OBJ)

%.o:%.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean:
	rm -f $(NAME) *.replace

re: clean fclean all

.PHONY: all clean fclean re