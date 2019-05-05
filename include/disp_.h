/*
** lib.h
** File description:
** Contain the prototypes of libmy.a
*/

#ifndef DISP__H_
#define DISP__H_

typedef struct action_s {
    char *token;
    struct action_s *next;
}action_t;

action_t *add_begin(action_t*, char *);
void add_last(action_t*, char *);
action_t *create_l(char **);
int list_size(action_t*);

#endif
