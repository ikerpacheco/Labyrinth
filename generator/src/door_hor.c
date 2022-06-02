/*
** EPITECH PROJECT, 2022
** door.c
** File description:
** checks if there is a door
*/

#include "../../include/generator.h"

int is_door_hor(char **maze, maze_t lim, int pos)
{
    int pos_min;
    int pos_max;

    if (lim.hor.x.min == 0 && lim.hor.x.max == lim.x_max)
        return (0);
    if (lim.hor.x.min > 0)
        pos_min = lim.hor.x.min - 1;
    else
        pos_min = 0;
    if (lim.hor.x.max < lim.x_max)
        pos_max = lim.hor.x.max + 1;
    else
        pos_max = lim.x_max;
    if ((maze[pos][pos_min] == '*' && pos_min != 0)
    || (maze[pos][pos_max] == '*' && pos_max != lim.x_max))
        return (1);
    else
        return (0);
}

int new_pos_hor(int pos, lim_t lim)
{
    if (pos < lim.y.max)
        pos++;
    else if (pos > lim.y.min)
        pos--;
    else
        pos = -1;
    return (pos);
}

int get_pos_hor(char **maze, maze_t lim, int rep)
{
    int pos = rand_nb(lim.hor.y.min, lim.hor.y.max, rep);

    if (is_door_hor(maze, lim, pos))
        pos = new_pos_hor(pos, lim.hor);
    return (pos);
}