NAME = sed
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

%.o	: %.cpp
	@$(CPP) $(CFLAGS) -c $< -o $@
	
$(NAME): $(OBJS)
	@$(CPP) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	@$(RM)  $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re