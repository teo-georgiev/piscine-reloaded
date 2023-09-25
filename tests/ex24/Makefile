NAME		=	libft.a
CC			=	cc
FLAGS		=	-Wall -Wextra -Werror -c
HEADER		=	./includes
SRCS		= 	./srcs/
CFILES		= 	ft_putchar.c ft_putstr.c \
				ft_strcmp.c ft_strlen.c \
				ft_swap.c
OFILES		= 	$(CFILES:.c=.o)
all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(addprefix $(SRCS), $(CFILES)) -I $(HEADER)
	ar -rv $(NAME) $(OFILES) 
	ranlib $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
