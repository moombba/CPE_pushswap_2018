/*
** EPITECH PROJECT, 
** my_strlen 
** File description
** return the size of a string
*/

int my_strlen(char const *str)
{
    int len = 0;

    for (; str[len]; len++);
    return (len);
}
