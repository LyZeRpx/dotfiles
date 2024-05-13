/*
** EPITECH PROJECT, 2023
** meta_libc
** File description:
** meta_libc.h
*/

#ifndef META_LIBC_H
    #define META_LIBC_H
    #include <stdbool.h>
    #include "meta_pm_typedefs.h"

int meta_atoi(char const *str);
int meta_is_prime(int nb);
bool meta_isneg(int to_check);

#endif
