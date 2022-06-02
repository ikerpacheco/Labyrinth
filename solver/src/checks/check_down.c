/*
** EPITECH PROJECT, 2022
** check_down
** File description:
** check_down
*/

#include "../../include/my.h"

t_solver *check_down(t_solver *solver, int a, int b)
{
    solver->map[a][b] = 'o';
    solver_program(solver, a + 1, b);
    return solver;
}