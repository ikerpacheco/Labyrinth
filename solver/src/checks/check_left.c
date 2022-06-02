/*
** EPITECH PROJECT, 2022
** check_right
** File description:
** check_right
*/

#include "../../include/my.h"

t_solver *check_left(t_solver *solver, int a, int b)
{
    solver->map[a][b] = 'o';
    solver_program(solver, a, b - 1);
    return solver;
}