##
## EPITECH PROJECT, 2020
## Makefile du main
## File description:
## le make lance tout le projet
##

SRC	=	src/main.c	\
		src/error.c \
		src/calculations.c

OBJ	=	$(SRC)

NAME	=	bsq

all:		$(NAME)

$(NAME):
		make -C lib/my
		gcc -o $(NAME) $(SRC) -I./include -L./lib -lmy

valgrind:
		make -C lib/my
		gcc -o $(NAME) $(SRC) -I./include -L./lib -lmy -g3

clean:
		make -C lib/my clean

fclean:
		make -C lib/my fclean
		rm $(NAME)

re:		fclean all
