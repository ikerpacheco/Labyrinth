/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** checks if s1 is equal to s2
*/

#include "../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int len_s1 = my_strlen(s1);
    int len_s2 = my_strlen(s2);

    if (len_s1 != len_s2)
        return -1;
    for (int i = 0; i < len_s1; i++) {
        if (s1[i] != s2[i])
            return -1;
    }
    return 1;
}
