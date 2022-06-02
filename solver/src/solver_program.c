/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Check character
*/

#include "../include/my.h"

int check_solved(t_solver *solver)
{
    if (solver->solved == 1) {
        solver->map[solver->height - 1][solver->width - 1] = 'o';
        solver = change_map(solver);
        my_printarr(solver->map);
        return 1;
    }
    return 0;
}

t_solver *returner_function(t_solver *solver, int a, int b)
{
    if (solver->returner == 1) {
        solver->returner = 0;
        solver->map[a][b] = '9';
    }
    return solver;
}

t_solver *check_movements(t_solver *solver, int a, int b)
{
    if (b != solver->width - 1 || a != solver->height - 1) {
        if (b != solver->width - 1 && solver->map[a][b + 1] == '*')
            solver = check_right(solver, a, b);
        if (a != solver->height - 1 && solver->map[a + 1][b] == '*')
            solver = check_down(solver, a, b);
        if (a != 0 && solver->map[a - 1][b] == '*')
            solver = check_above(solver, a, b);
        if (b != 0 && solver->map[a][b - 1] == '*')
            solver = check_left(solver, a, b);
        solver->returner = 1;
        return solver;
    } else {
        solver->solved = 1;
        return solver;
    }
}

int solver_program(t_solver *solver, int a, int b)
{
    solver = check_movements(solver, a, b);
    if (check_solved(solver) == 1)
        exit (0);
    solver = returner_function(solver, a, b);
}