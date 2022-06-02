##
## EPITECH PROJECT, 2022
## makefile
## File description:
## creates the executable
##

NAME	=	solver

SRC	=	src/main.c \
		src/get_map.c \
		src/init/solver.c \
		src/change_map.c \
		src/save_file.c \
		src/solver_program.c \
		lib/my_printarr.c \
		lib/str_to_array.c \
		lib/my_strlen.c \
		lib/my_strdup.c \
		lib/my_strcpy.c \
		lib/my_strcmp.c \
		lib/my_putstr.c \
		lib/my_putchar.c \
		lib/my_arrlen.c \
		src/check_solution.c \
		src/get_map_values.c \
		lib/my_arrdup.c \
		lib/intro_counter.c \
		src/checks/check_above.c \
		src/check_impossible.c \
		src/checks/check_down.c \
		src/checks/check_left.c \
		src/checks/check_right.c

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
