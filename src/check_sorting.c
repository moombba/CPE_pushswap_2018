/*
** EPITECH PROJECT, 2018
** check_sorting
** File description:
** check if the blabla is sorted
*/

#include "swap.h"

int check_l_a(control_t *big_bro)
{
    for (list_t *tmp = big_bro->l_a; tmp->next != NULL; tmp = tmp->next)
        if (tmp->elem > tmp->next->elem)
            return (-1);
    return (1);
}

int check_l_b(control_t *big_bro)
{
    if (big_bro->l_b == NULL)
        return (1);
    for (list_t *tmp = big_bro->l_b; tmp->next != NULL; tmp = tmp->next)
        if (tmp->elem > tmp->next->elem)
            return (-1);
    return (1);
}

int check_end(control_t *big_bro)
{
    if (check_l_a(big_bro) == 1 && big_bro->l_b == NULL)
        return (1);
    else
        return (0);
}
