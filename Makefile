##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

SRCDIR	=	src/

SRC =   main.c  \
        operations.c \
        check_sorting.c \
        classic_sort.c \
        list_store.c \
        list_1.c

SRCS =  $(addprefix $(SRCDIR), $(SRC))

CFLAGS  +=  -I./include -W -Wall -Wextra

CC	=	gcc -g3 -o

NAME 	=  push_swap

all:	$(NAME)

LIB:	make -C lib/my

$(NAME):
	make -C lib/my ; $(CC) $(NAME) $(SRCS) $(CFLAGS) -L./lib/my -lmy

clean:
	rm -f $(OBJ); make clean -C lib/my

fclean:	clean
	rm -f $(NAME); make fclean -C lib/my
	rm -f *.gc*

re:	fclean all

auteur:
	echo $(USER) > auteur

