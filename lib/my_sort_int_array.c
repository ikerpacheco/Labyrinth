/*
** EPITECH PROJECT, 2021
** my_sort_int_array.c
** File description:
** prints the integers in ascendent order
*/

void my_sort_int_array(int *tab, int size)
{
    int i = 0;
    int t = 0;

    while (i <= size) {
        if (tab[i] > tab[i + 1]) {
            t = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = t;
            i = -1;
        }
        i++;
    }
}
