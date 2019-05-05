/*
** EPITECH PROJECT, 2018
** list_1
** File description:
** create linked lists
*/

#include "swap.h"

action_t *add_begin(action_t *next, char *str)
{
    action_t *list = malloc(sizeof(*list));
    list->token = str;
    list->next = next;
    return (list);
}

void add_last(action_t *begin, char *str)
{
    action_t *list = malloc(sizeof(*list));
    action_t *tmp = begin;

    list->token = str;
    list->next = NULL;
    for (; tmp->next != NULL; tmp = tmp->next);
    tmp->next = list;
}

action_t *create_l(char **ar)
{
    action_t *next = NULL;
    int i = 0;

    for (; ar[i + 1] != NULL; i += 1);
    for (; i >= 0; i -= 1)
        next = add_begin(next, ar[i]);
    return (next);
}

int list_size(action_t *begin)
{
    int count = 0;

    for (action_t *tmp = begin; tmp != NULL; tmp = tmp->next, count += 1);
    return (count);
}
