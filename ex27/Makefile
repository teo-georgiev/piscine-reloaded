NAME	=	ft_display_file
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -c
CFILE	=	ft_display_file.c
OFILE	=	$(CFILE:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(CFILE)
	ar -rv $(NAME) $(OFILE)
	ranlib $(NAME)

clean: 
	rm -f $(OFILE)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean
