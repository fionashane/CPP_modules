NAME = megaphone
SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	$(RM)  $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re