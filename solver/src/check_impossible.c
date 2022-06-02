/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Check character
*/

#include "../include/my.h"

int check_impossible(t_solver *solver)
{
    if (solver->map[solver->height - 1][solver->width - 1] == 'X')
        return 1;
    return 0;
}