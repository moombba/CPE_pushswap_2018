/*
** EPITECH PROJECT, 
** my_print 
** File description
** return the size of a string
*/

#include <unistd.h>

int my_strlen(char *);

int my_putstr(char *str)
{                                           
    write(1, str, my_strlen(str));
    return (0);
}
