/*
** EPITECH PROJECT, 2022
** generator.h
** File description:
** header file of generator program
*/

#ifndef GENERATOR_H_
    #define GENERATOR_H_

    #include <stdlib.h>
    #include <stdio.h>
    #include <time.h>
    #include <unistd.h>

    typedef struct max_s {
        int min;
        int max;
    }max_t;

    typedef struct lim_s {
        max_t x;
        max_t y;
    }lim_t;

    typedef struct maze_s {
        lim_t hor;
        lim_t ver;
        int x_max;
        int y_max;
    }maze_t;

    //GENERATE MAZE
    char **generate_maze(int width, int height);
    int get_pos_ver(char **maze, maze_t lim, int rep);
    int get_pos_hor(char **maze, maze_t lim, int rep);

    //SET LIMIT
    lim_t set_lim(int x_min, int x_max, int y_min, int y_max);

    //RAND
    int rand_nb(int min, int max, int rep);

    //PRINT MAZE
    void print_maze(char **maze);

    //ALGORITHM
    char **algorithm(char **maze, maze_t lim, int opt, int rep);

    //ADD WALLS
    char **add_ver_wall(char **maze, lim_t lim, int pos, int gate);
    char **add_hor_wall(char **maze, lim_t lim, int pos, int gate);

    //DOOR
    int get_pos_ver(char **maze, maze_t lim, int rep);
    int get_pos_hor(char **maze, maze_t lim, int rep);
#endif /* !GENERATOR_H_ */