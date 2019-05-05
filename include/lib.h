/*
** lib.h
** File description:
** Contain the prototypes of libmy.a
*/

#ifndef TEST_H_
#define TEST_H_

void my_putchar(char);
int imy_isneg(int);
int my_put_nbr(int);
void my_swap(int*, int*);
int my_strlen(char const*);
int my_putstr(char const*);
int my_getnbr(char const*);
void my_sort_int_array(int*, int);
int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_is_prime(int);
int my_find_prime_sup(int);
char *my_strcpy(char*, char const*);
char *my_strncpy(char*, char const*, int);
char *my_revstr(char*);
char *my_strstr(char*, char const *);
int my_strcmp(char const*, char const*);
int my_strncmp(char const*,char const*, int);
char *my_strupcase(char*);
char *my_strlowcase(char*);
char *my_strcapitalize(char*);
int my_str_isalpha(char const*);
int my_str_isnum(char const*);
int my_str_islower(char const*);
int my_str_isupper(char const*);
int my_str_isprintable(char const*);
int my_showstr(char const*);
int my_showmem(char const*,int);
char *my_strcat(char*,char const*);
char *my_strncat(char*,char const*,int);
char *my_int_to_str(int);
int find_sup(char *str1, char *str2);
char *sup_case(char *str);
int my_getdigit(char c);
int find_neg(char *str1, char *str2);
char *my_strconcat(char *str1, char *str2);
char *format(char *str1, char *str2);

#endif
