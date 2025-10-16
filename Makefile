NAME = libft.a
SOURCES = ft_substr.c ft_strdup.c ft_calloc.c ft_strnstr.c ft_memcmp.c ft_strncmp.c ft_strlen.c ft_strlcpy.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memset.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_strrchr.c
HEADERFILES = libft.h
OBJECTS = $(SOURCES:.c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror

all:
	$(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c $(HEADERFILES)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean:	clean
	rm -f $(NAME)

re:	
	fclean all

.PHONY:
	all clean fclean re