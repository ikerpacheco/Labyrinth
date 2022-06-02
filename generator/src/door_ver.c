/*
** EPITECH PROJECT, 2022
** door_ver.c
** File description:
** door function for ver
*/

#include "../../include/generator.h"

int is_door_ver(char **maze, maze_t lim, int pos)
{
    int pos_min;
    int pos_max;

    if (lim.ver.y.min == 0 && lim.ver.y.max == lim.y_max)
        return (0);
    if (lim.ver.y.min > 0)
        pos_min = lim.ver.y.min - 1;
    else
        pos_min = 0;
    if (lim.ver.y.max < lim.y_max)
        pos_max = lim.ver.y.max + 1;
    else
        pos_max = lim.y_max;
    if ((maze[pos_min][pos] == '*' && pos_min != 0)
    || (maze[pos_max][pos] == '*' && pos_max != lim.y_max))
        return (1);
    else
        return (0);
}

int new_pos_ver(int pos, lim_t lim)
{
    if (pos < lim.x.max)
        pos++;
    else if (pos > lim.x.min)
        pos--;
    else
        pos = -1;
    return (pos);
}

int get_pos_ver(char **maze, maze_t lim, int rep)
{
    int pos = rand_nb(lim.ver.x.min, lim.ver.x.max, rep);

    if (is_door_ver(maze, lim, pos)) {
        pos = new_pos_ver(pos, lim.ver);
    }
    return (pos);
}