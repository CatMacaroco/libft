NAME = libft.a
SOURCES = ft_strnstr.c ft_memcmp.c ft_strncmp.c ft_strlen.c ft_strlcpy.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memset.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_strrchr.c
HEADERFILES = libft.h
OBJECTS = $(SOURCES:.c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror

all:
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean:	clean
	rm -f $(libft.a)

re:	
	fclean $(libft.a)

phony: 