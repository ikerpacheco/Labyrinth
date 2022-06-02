/*
** EPITECH PROJECT, 2022
** check_solution
** File description:
** check_solution
*/

#include "../include/my.h"

int check_solution(t_solver *solver)
{
    if (check_impossible(solver) == 1) {
        my_putstr("no solution found\n");
        return 1;
    }
    return 0;
}