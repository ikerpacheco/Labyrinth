/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** declares all functions
*/

#ifndef __SOLVER_H__
    #define __SOLVER_H__

    #include "../my.h"

    typedef struct s_solver {
        char **map;
        int error;
        int a;
        int b;
        int solved;
        int height;
        int width;
        int last_a;
        int last_b;
        int returner;
    } t_solver;
#endif /* !MY_H_ */
