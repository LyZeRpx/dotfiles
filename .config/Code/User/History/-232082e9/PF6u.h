/*
** EPITECH PROJECT, 2023
** meta_libc
** File description:
** meta_libc.h
*/

#ifndef META_LIBC_H
    #define META_LIBC_H
    #include <stdbool.h>
    #include "meta_ranks_typedefs.h"

int meta_atoi(char const *str);
int meta_is_prime(int nb);
bool meta_isneg(int to_check);
int meta_mprintf(char const *format, ...);
char *meta_strdup(char *dest, char *src);
int meta_printf(char const *format, ...);
int meta_put_nbr(int nb);
char *meta_strdup(char *dest, char *src);
int meta_strncmp(char *str1, char *str2, int n_th_char);
int meta_strcmp(char *str1, char *str2);
int meta_strlen(char const *str);
int meta_putchar(char c);
int meta_putstr(char const *str);
rank2_t meta_promote_rank1(char *str, const char limiter);
#endif
