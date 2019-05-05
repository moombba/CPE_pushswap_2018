/*
** lib.h
** File description:
** Contain the prototypes of libmy.a
*/

#ifndef STRUCT_1_H_
#define STRUCT_1_H_

typedef struct list_s
{
    int elem;
    struct list_s *next;
}list_t;

typedef struct control_s
{
    list_t *l_a;
    list_t *l_b;
}control_t;

list_t *add_start(list_t*, int);
void add_end(list_t*, int);
list_t *create_list(char **);
void add_mid(list_t*, list_t*, int);
int my_list_size(list_t*);

#endif
