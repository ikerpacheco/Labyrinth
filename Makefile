##
## EPITECH PROJECT, 2022
## makefile
## File description:
## creates the executable
##

GENERATOR	=	generator/

SOLVER	=	solver/

all:	$(OBJ)
		make -C $(GENERATOR)
		make -C $(SOLVER)

clean:
	make -C $(GENERATOR) clean
	make -C $(SOLVER) clean

fclean:
	make -C $(GENERATOR) fclean
	make -C $(SOLVER) fclean

re:	fclean all;
