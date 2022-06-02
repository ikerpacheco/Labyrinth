/*
** EPITECH PROJECT, 2021
** my_compute_power_rec.c
** File description:
** computes the power of the given parameter
*/

int my_compute_power_rec(int nb, int p)
{
    int result;

    result = nb;
    if (p == 0){
        return (1);
    } else if (p >= 1) {
        result *= my_compute_power_rec(nb, p - 1);
        return (result);
    } else {
        return (0);
    }
}
