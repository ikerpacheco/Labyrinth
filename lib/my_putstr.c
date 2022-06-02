/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** writes a string
*/

#include "../include/my.h"

int my_putstr(char const *str)
{
    int i = 0;
    char c = str[i];

    while (c != '\0') {
        my_putchar(str[i]);
        c = str[i];
        i++;
    }
    return 0;
}
