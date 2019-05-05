#include "swap.h"

//trouver la mediane

int find_pivot(control_t *big_bro, int mid)
{
    int pivot = 0;
    list_t *tmp = big_bro->l_a;

    for (int i = 0; i < mid; i++, tmp = tmp->next);
    pivot = tmp->elem;
    return (pivot);
}

void quicky(control_t *big_bro)
{
    int size = my_list_size(big_bro->l_a);
    int pivot = find_pivot(big_bro, size / 2);
    list_t *tmp = big_bro->l_a;

    for (int count = 0; count < size; tmp = tmp->next) {
        if (big_bro->l_a->elem < pivot)
            pb(big_bro);
        else
            ra(big_bro);
    }
}


