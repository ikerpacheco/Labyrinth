/*
** EPITECH PROJECT, 2022
** solver
** File description:
** solver
*/

#include "../../include/my.h"

t_solver *init_solver(void)
{
    t_solver *solver = malloc(sizeof(t_solver));

    solver->map = NULL;
    solver->error = 0;
    solver->a = 0;
    solver->b = 0;
    solver->width = 0;
    solver->height = 0;
    solver->last_a = 0;
    solver->last_b = 0;
    solver->returner = 0;

    return solver;
}