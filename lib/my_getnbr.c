/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** converts a string into an int
*/

#include <stdio.h>

int my_getnbr(char const *str)
{
    int value = 0;
    int i = 0;
    int sign = 1;

    while (str[i] != '\0') {
        if (str[i] == '-')
            sign *= (-1);
        if (str[i] >= '0' && str[i] <= '9')
            value = value * 10 + (str[i] - '0');
        else
            return (value * sign);
        i++;
    }
    return (value * sign);
}
