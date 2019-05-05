/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** lololo
*/

#include "swap.h"

int check_input(char **av)
{
    for (int i = 1; av[i] != NULL; i++) {
        for (int u = 0; av[i][u]; u++) {
            if (! ((av[i][u] <= '9' && av[i][u] >= '0') || av[i][u] == '-'))
                return (-1);
        }
    }
    return (0);
}

void init_control(control_t *big_bro)
{
    big_bro->l_a = NULL;
    big_bro->l_b = NULL;
}

int main(int ac, char **av)
{
    control_t big_bro;

    if (ac < 2)
        return (-84);
    if (check_input(av) == -1)
        return (84);
    init_control(&big_bro);
    big_bro.l_a = create_list(av);
    loop(&big_bro);
    return (0);
}
