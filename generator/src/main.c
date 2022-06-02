/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main function
*/

#include "../../include/generator.h"

void print_maze(char **maze)
{
    int i = 0;

    for (i = 0; maze[i + 1] != NULL; i++) {
        printf("%s\n", maze[i]);
    }
    printf("%s", maze[i]);
}

int error(int ac, char **av)
{
    if (ac < 3)
        return (84);
    if (atoi(av[1]) <= 0 || atoi(av[1]) > 10000
    || atoi(av[2]) <= 0 || atoi(av[2]) > 10000)
        return (84);
    return (0);
}

int main(int ac, char **av)
{
    char **maze;

    if (error(ac, av) == 84)
        return (84);
    maze = generate_maze(atoi(av[1]), atoi(av[2]));
    print_maze(maze);
    return (0);
}