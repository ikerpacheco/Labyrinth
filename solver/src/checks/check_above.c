/*
** EPITECH PROJECT, 2022
** check_right
** File description:
** check_right
*/

#include "../../include/my.h"

t_solver *check_above(t_solver *solver, int a, int b)
{
    solver->map[a][b] = 'o';
    solver_program(solver, a - 1, b);
    return solver;
}