CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = do-op
SOURCES = main.c cal.c put.c
OBJECTS = $(SOURCES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean:	clean
	rm -f $(NAME)

re : fclean all
.PHONY : clean fclean re