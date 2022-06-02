/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main function
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    t_solver *solver = init_solver();
    solver = get_map(av, solver);
    solver = get_map_values(solver);

    if (check_solution(solver) == 1)
        return 0;
    solver_program(solver, 0, 0);
    if (solver->solved == 1)
        return 0;
    return 0;
}