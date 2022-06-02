##
## EPITECH PROJECT, 2022
## makefile
## File description:
## creates the executable
##

NAME	=	generator

SRC	=	src/main.c	\
		src/generate_maze.c	\
		src/rand_nb.c	\
		src/set_lim.c	\
		src/algorithm_maze.c	\
		src/add_wall.c	\
		src/door_hor.c	\
		src/door_ver.c

OBJ	=	$(SRC:.c=.o)

LIB_DIR	=	../lib

LIB	=	-L $(LIB_DIR) -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C $(LIB_DIR)
	gcc -o $(NAME) $(SRC) $(LIB)

clean:
	rm -f $(OBJ)
	make -C $(LIB_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIB_DIR) fclean

re:	fclean all
