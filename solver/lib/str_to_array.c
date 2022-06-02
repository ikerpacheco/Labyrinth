/*
** EPITECH PROJECT, 2022
** str to array
** File description:
** str_to_array
*/

#include "../include/my.h"

char **my_strallocs(char **array, int width, int height)
{
    array = malloc(height * sizeof(char *) + 1);

    for (int i = 0; i < height; i++) {
        array[i] = malloc(width * sizeof(char));
    }
    return (array);
}

char **str_to_array(char *str)
{
    int width = my_strlen(str);
    int height = intro_counter(str);
    char **array = my_strallocs(array, width, height);
    int n = 0;
    int x = 0;
    int y = 0;

    while (str[n] != '\0') {
        while (str[n] != '\n') {
            array[y][x] = str[n];
            n += 1;
            x += 1;
        }
        n += 1;
        x = 0;
        y += 1;
    }
    array[y] = NULL;
    return (array);
}