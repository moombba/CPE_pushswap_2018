/*
** lib.h
** File description:
** Contain the prototypes of libmy.a
*/

#ifndef SWAP_H_
#define SWAP_H_

#include "lib.h"
#include <unistd.h>
#include "struct_1.h"
#include <stdlib.h>
#include "disp_.h"

void sa(control_t *);
void sb(control_t *);
void pb(control_t *);
void pa(control_t *);
void ra(control_t *);
void rb(control_t *);
void r_ra(control_t *);
void r_rb(control_t *);
int check_l_a(control_t *);
int check_l_b(control_t *);
void classic_sort(control_t *);
void loop(control_t *big_bro);
#endif
