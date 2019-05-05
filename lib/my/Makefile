##
## EPITECH PROJECT, 2017
## my_int_to_str.c
## File description
## sdsqdsqfsq
##

SRC     =   my_getnbr.c \
		my_putchar.c    \
		my_put_nbr.c    \
		my_putstr.c \
		my_strlen.c

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
