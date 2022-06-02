/*
** EPITECH PROJECT, 2022
** str to array
** File description:
** str_to_array
*/

#include "../include/my.h"

int intro_counter(char *str)
{
    int counter = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            counter++;
    }
    return counter;
}