/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Check character
*/

#include "../include/my.h"

t_solver *get_map(char **av, t_solver *solver)
{
    char *str = save_file(av[1]);
    solver->map = str_to_array(str);
    return solver;
}