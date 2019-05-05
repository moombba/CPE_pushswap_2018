/*
** EPITECH PROJECT, 2018
** list_sotre
** File description:
** store ll
*/

#include "swap.h"

list_t *add_start(list_t *next, int elem)
{
    list_t *list = malloc(sizeof(*list));
    list->elem = elem;
    list->next = next;
    return (list);
}

void add_end(list_t *begin, int elem)
{
    list_t *list = malloc(sizeof(*list));
    list_t *tmp = begin;

    list->elem = elem;
    list->next = NULL;
    for (; tmp->next != NULL; tmp = tmp->next);
    tmp->next = list;
}

void add_mid(list_t *prev, list_t *next, int elem)
{
    list_t *add = malloc(sizeof (list_t *));

    add->elem = elem;
    add->next = next->next;
    prev->next = add;
}

list_t *create_list(char **ar)
{
    list_t *next = NULL;
    int i = 0;

    for (; ar[i + 1] != NULL; i += 1);
    for (; i >= 0; i -= 1)
        next = add_start(next, my_getnbr(ar[i]));
    return (next);
}

int my_list_size(list_t *begin)
{
    int count = 0;

    for (list_t *tmp = begin; tmp != NULL; tmp = tmp->next, count += 1);
    return (count);
}
