/*
** EPITECH PROJECT, 2018
** calssic_sort
** File description:
** sort the list
*/

#include "swap.h"

void pb_no_space(control_t *big_bro)
{
    list_t *tmp = big_bro->l_a;

    big_bro->l_a = big_bro->l_a->next;
    tmp->next = big_bro->l_b;
    big_bro->l_b = tmp;
    write(1, "pb", 2);
}

void sa_no_space(control_t *big_bro)
{
    list_t *tmp = big_bro->l_a->next;

    big_bro->l_a->next = big_bro->l_a->next->next;
    tmp->next = big_bro->l_a;
    big_bro->l_a = tmp;
    write(1, "sa", 2);
}

void no_space(control_t *big_bro)
{
        if (big_bro->l_a->elem > big_bro->l_a->next->elem)
            sa_no_space(big_bro);
        else 
            pb_no_space(big_bro);
}

void classic_sort(control_t *big_bro)
{
    while (check_l_a(big_bro) == -1) {
        if (big_bro->l_a->elem > big_bro->l_a->next->elem) {
            sa(big_bro);
        }
        else {
            pb(big_bro);
        }
    }
    while (check_l_b(big_bro) == -1 && big_bro->l_b != NULL) {
        if (big_bro->l_b->next != 0 && big_bro->l_b->elem < big_bro->l_b->next->elem) {
            sb(big_bro);
        }
        else {
            pa(big_bro);
        }
    }
}

void loop(control_t *big_bro)
{
    if (check_l_a(big_bro) == -1) {
        no_space(big_bro);
        while (check_l_a(big_bro) == -1 || check_l_b(big_bro) == -1)
            classic_sort(big_bro);
    }
    while (big_bro->l_b != NULL)
        pa(big_bro);
}
