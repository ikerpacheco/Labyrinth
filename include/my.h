/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** declares all functions
*/

#ifndef MY_H_
#define MY_H_
    void my_putchar(char c);
    int my_isneg(int nb);
    int my_put_nbr(int nb);
    void my_swap(int *a, int *b);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    int my_getnbr(char const *str);
    void my_sort_int_array(int *tab, int size);
    int my_compute_power_rec(int nb, int power);
    int my_compute_square_root(int nb);
    int my_is_prime(int nb);
    int my_find_prime_sup(int nb);
    int intro_counter(char *str);
    char *my_strcpy(char const *src);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_revstr(char *str);
    char *my_strstr(char *str, char const *to_find);
    int my_strcmp(char const *s1, char const *s2);
    int my_strncmp(char const *s1, char const *s2, int n);
    char *my_strupcase(char *str);
    char *my_strlowcase(char *str);
    char *my_strcapitalize(char *str);
    int my_str_isalpha(char const *str);
    int my_str_isnum(char const *str);
    int my_str_islower(char const *str);
    int my_str_isupper(char const *str);
    int my_str_isprintable(char const *str);
    char **my_str_to_word_array(char *str, char sep);
    int my_showstr(char const *str);
    int my_showmem(char const *str, int size);
    char *my_strcat(char *dest, char *src);
    char *my_strncat(char *dest, char const *src, int nb);
    char *my_get_substr(char *str, int ini, int len);
    int count_lines_array(char **array);
    void print_array(char **array);
    char **my_remalloc_array(char **src, int size);
    char *save_file_str(char *filepath);
    char *my_get_line(void);
#endif /* !MY_H_ */