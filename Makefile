NAME = my_program
SOURCES = ft_strlen.c ft_strlcpy.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memset.c ft_strlcat.c ft_tolower.c ft_toupper.c
HEADERFILES = src/greeter.h
OBJECTS = $(SOURCES:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $^

obj/%.o: src/%.c $(HEADERFILES)
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

NAME:

all:

clean:
	rm -f $(OBJECTS)

fclean:	clean
	rm -f $(NAME)

re:	fclean $(NAME)

.PHONY: clean fclean re