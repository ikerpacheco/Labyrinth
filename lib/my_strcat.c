/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** concatenates two strings
*/

#include "../include/my.h"
#include <stdlib.h>

char *my_strcat(char *dest, char *src)
{
    char *result = malloc(my_strlen(dest) + my_strlen(src) + 1);
    int i = 0;
    int j = 0;

    if (dest == NULL && src == NULL)
        return NULL;
    if (dest == NULL)
        return src;
    if (src == NULL)
        return dest;
    while (dest[i] != '\0') {
        result[i] = dest[i];
        i++;
    }
    while (src[j] != '\0') {
        result[i + j] = src[j];
        j++;
    }
    result[i + j] = '\0';
    return result;
}
