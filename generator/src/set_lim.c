/*
** EPITECH PROJECT, 2022
** set_lim.c
** File description:
** sets the limit with the given parameters
*/

#include "../../include/generator.h"

lim_t set_lim(int x_min, int x_max, int y_min, int y_max)
{
    lim_t lim;

    lim.x.min = x_min;
    lim.x.max = x_max;
    lim.y.min = y_min;
    lim.y.max = y_max;
    return (lim);
}
