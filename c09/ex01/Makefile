CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SOURCES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJECTS = $(SOURCES:.c=.o)
INCLUDES = includes

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar -rsc $(NAME) $(OBJECTS)
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)

clean:
	rm -f $(OBJECTS)

fclean:	clean
	rm -f $(NAME)

re : fclean all
.PHONY : clean fclean re