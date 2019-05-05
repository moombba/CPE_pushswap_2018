/*
** EPITECH PROJECT, 2018
** operation.c
** File description:
** sdsqfqsf sd
*/

#include "swap.h"

void sb(control_t *big_bro)
{
    list_t *tmp = big_bro->l_b->next;

    big_bro->l_b->next = big_bro->l_b->next->next;
    tmp->next = big_bro->l_b;
    big_bro->l_b = tmp;
    write(1, " sb", 3);
}

void sa(control_t *big_bro)
{
    list_t *tmp = big_bro->l_a->next;

    big_bro->l_a->next = big_bro->l_a->next->next;
    tmp->next = big_bro->l_a;
    big_bro->l_a = tmp;
    write(1, " sa", 3);
}

void sc(control_t *big_bro)
{
    list_t *tmp = big_bro->l_b->next;

    big_bro->l_b->next = big_bro->l_b->next->next;
    tmp->next = big_bro->l_b;
    big_bro->l_b = tmp;
    tmp = big_bro->l_a->next;
    big_bro->l_a->next = big_bro->l_a->next->next;
    tmp->next = big_bro->l_a;
    big_bro->l_a = tmp;
}

void pb(control_t *big_bro)
{
    list_t *tmp = big_bro->l_a;

    big_bro->l_a = big_bro->l_a->next;
    tmp->next = big_bro->l_b;
    big_bro->l_b = tmp;
    write(1, " pb", 3);
}

void pa(control_t *big_bro)
{
    list_t *tmp = big_bro->l_b;

    big_bro->l_b = big_bro->l_b->next;
    tmp->next = big_bro->l_a;
    big_bro->l_a = tmp;
    write(1, " pa", 3);
}
