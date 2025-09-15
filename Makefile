NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Werror -Wextra 

SRCS = push_swap.c

OBJS = $(SRCS .c:.o)

RM = rm -rf

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all 

.PHONY: all clean fclean re