/*
** EPITECH PROJECT, 2022
** my_compute_square_root
** File description:
** square root
*/


int  my_compute_square_root(int nb)
{
    int result;
    int i = 1;

    while (i <= nb / 2){
        result = nb / i;
        if (result == i){
            return (result);
        }
        i++;
    }
    return (0);
}
