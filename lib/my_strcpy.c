/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** copies a string into another
*/

#include <stdlib.h>
#include "../include/my.h"

char *my_strcpy (char const *src)
{
    int size = my_strlen(src);
    char *str = malloc(size + 1);

    for (int i = 0; i < size; i++)
        str[i] = src[i];
    return str;
}
