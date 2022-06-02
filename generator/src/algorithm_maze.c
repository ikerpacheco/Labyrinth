/*
** EPITECH PROJECT, 2022
** algorithm.c
** File description:
** makes the algorithm
*/

#include "../../include/generator.h"

char **left(char **maze, maze_t lim, int pos, int gate)
{
    maze_t new_lim;

    new_lim.hor = set_lim(lim.hor.x.min, pos - 1, lim.hor.y.min, lim.hor.y.max);
    new_lim.ver = set_lim(lim.ver.x.min, pos - 2, lim.ver.y.min, lim.ver.y.max);
    new_lim.x_max = lim.x_max;
    new_lim.y_max = lim.y_max;
    return (algorithm(maze, new_lim, 1, gate));
}

char **right(char **maze, maze_t lim, int pos, int gate)
{
    maze_t new_lim;

    new_lim.hor = set_lim(pos + 1, lim.hor.x.max, lim.hor.y.min, lim.hor.y.max);
    new_lim.ver = set_lim(pos + 2, lim.ver.x.max, lim.ver.y.min, lim.ver.y.max);
    new_lim.x_max = lim.x_max;
    new_lim.y_max = lim.y_max;
    return (algorithm(maze, new_lim, 1, gate));
}

char **go_up(char **maze, maze_t lim, int pos, int gate)
{
    maze_t new_lim;

    new_lim.hor = set_lim(lim.hor.x.min, lim.hor.x.max, lim.hor.y.min, pos - 2);
    new_lim.ver = set_lim(lim.ver.x.min, lim.ver.x.max, lim.ver.y.min, pos - 1);
    new_lim.x_max = lim.x_max;
    new_lim.y_max = lim.y_max;
    return (algorithm(maze, new_lim, 0, gate));
}

char **down(char **maze, maze_t lim, int pos, int gate)
{
    maze_t new_lim;

    new_lim.hor = set_lim(lim.hor.x.min, lim.hor.x.max, pos + 2, lim.hor.y.max);
    new_lim.ver = set_lim(lim.ver.x.min, lim.ver.x.max, pos + 1, lim.ver.y.max);
    new_lim.x_max = lim.x_max;
    new_lim.y_max = lim.y_max;
    return (algorithm(maze, new_lim, 0, gate));
}

char **algorithm(char **maze, maze_t lim, int opt, int rep)
{
    int pos;
    int gate;

    if (opt == 0 && (lim.ver.y.max - lim.ver.y.min > 0)
    && (lim.ver.x.max - lim.ver.x.min > 0)) {
        pos = get_pos_ver(maze, lim, rep);
        if (pos == -1)
            return (maze);
        gate = rand_nb(lim.ver.y.min, lim.ver.y.max, - 1);
        maze = add_ver_wall(maze, lim.ver, pos, gate);
        maze = left(maze, lim, pos, gate);
        maze = right(maze, lim, pos, gate);
    } else if (opt == 1 && (lim.hor.x.max - lim.hor.x.min > 0)
    && (lim.hor.y.max - lim.hor.y.min > 0)) {
        pos = get_pos_hor(maze, lim, rep);
        if (pos == -1)
            return (maze);
        gate = rand_nb(lim.hor.x.min, lim.hor.x.max, - 1);
        maze = add_hor_wall(maze, lim.hor, pos, gate);
        maze = go_up(maze, lim, pos, gate);
        maze = down(maze, lim, pos, gate);
    }
    return (maze);
}
