/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** declares all functions
*/

#ifndef __MY_H__
    #define __MY_H__

    #include <stdarg.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <dirent.h>
    #include <signal.h>
    #include <string.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <string.h>
    #include <pwd.h>
    #include <fcntl.h>
    #include <grp.h>
    #include <time.h>

    #include "structs/solver.h"

    t_solver *init_solver(void);
    t_solver *change_map(t_solver *solver);
    int check_impossible(t_solver *solver);
    t_solver *get_map_values(t_solver *solver);
    int check_solution(t_solver *solver);
    char *save_file(char const *filepath);
    char **str_to_array(char *str);
    int intro_counter(char *str);
    int my_strlen(char const *str);
    char *my_strdup(char *src);
    char *my_strcpy(char *dest, char const *src);
    int my_strcmp(char const *s1, char const *s2);
    void my_putstr(char const *str);
    void my_putchar(char c);
    void my_printarr(char **arr);
    int my_arrlen(char **arr);
    t_solver *get_map(char **av, t_solver *solver);
    int solver_program(t_solver *solver, int a, int b);
    t_solver *check_down(t_solver *solver, int a, int b);
    t_solver *check_right(t_solver *solver, int a, int b);
    t_solver *check_left(t_solver *solver, int a, int b);
    t_solver *check_above(t_solver *solver, int a, int b);
    char **my_arrdup(char **arr);
#endif /* !MY_H_ */
