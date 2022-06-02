/*
** EPITECH PROJECT, 2022
** generate_maze.c
** File description:
** generates the maze
*/

#include "../../include/generator.h"

char **open_maze(char **maze, int height, int width)
{
    maze[0][0] = '*';
    maze[0][1] = '*';
    maze[1][0] = '*';
    maze[height - 1][width - 1] = '*';
    maze[height - 1][width - 2] = '*';
    maze[height - 2][width - 1] = '*';
    return (maze);
}

char **init_maze(int width, int height)
{
    char **maze = malloc(sizeof(char *) * (height + 1));

    for (int y = 0; y < height; y++) {
        maze[y] = malloc(width + 1);
        for (int x = 0; x < width; x++) {
            maze[y][x] = '*';
        }
        maze[y][width] = '\0';
    }
    maze[height] = NULL;
    return (maze);
}

char **generate_maze(int width, int height)
{
    char **maze = init_maze(width, height);
    maze_t lim;

    lim.x_max = width - 1;
    lim.y_max = height - 1;
    lim.hor = set_lim(0, width - 1, 0, height - 1);
    lim.ver = set_lim(0, width - 1, 0, height - 1);
    srand(time(NULL));
    maze = algorithm(maze, lim, 0, -1);
    maze = open_maze(maze, height, width);
    return (maze);
}