/*
** EPITECH PROJECT, 2022
** get_map_values
** File description:
** get_map_values
*/

#include "../include/my.h"

t_solver *get_map_values(t_solver *solver)
{
    solver->height = my_arrlen(solver->map);
    solver->width = my_strlen(solver->map[0]);
    return solver;
}