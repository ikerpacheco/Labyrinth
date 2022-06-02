/*
** EPITECH PROJECT, 2022
** rand_nb.c
** File description:
** creates a rand integer
*/

#include "../../include/generator.h"

int rand_nb(int min, int max, int rep)
{
    int nb = rand() % (max - min) + min;

    if (max - min < 2) {
        if (min == rep)
            return (max);
        else
            return (min);
    }
    while (nb == rep) {
        nb = rand() % (max - min) + min;
    }
    return (nb);
}
