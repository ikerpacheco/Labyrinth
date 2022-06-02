/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main function
*/

#include "../include/my.h"

char replace_characters(char c)
{
    if (c == '9')
        c = '*';
    return c;
}

t_solver *change_map(t_solver *solver)
{
    int a = 0;

    for (a; a < solver->height; a++) {
        for (int b = 0; b < solver->width; b++)
            solver->map[a][b] = replace_characters(solver->map[a][b]);
    }
    return solver;
}