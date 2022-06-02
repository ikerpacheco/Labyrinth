/*
** EPITECH PROJECT, 2022
** add_wall.c
** File description:
** adds a line of walls
*/

#include "../../include/generator.h"

char **add_ver_wall(char **maze, lim_t lim, int pos, int gate)
{
    for (int i = lim.y.min; i <= lim.y.max; i++)
        maze[i][pos] = 'X';
    maze[gate][pos] = '*';
    return (maze);
}

char **add_hor_wall(char **maze, lim_t lim, int pos, int gate)
{
    for (int i = lim.x.min; i <= lim.x.max; i++)
        maze[pos][i] = 'X';
    maze[pos][gate] = '*';
    return (maze);
}