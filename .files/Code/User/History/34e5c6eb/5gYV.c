/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include "meta_libc.h"

void meta_print_rank2(rank2_t array)
{
    for (int i = 0; dbl_array[i] != NULL; i++) {
        meta_putstr(dbl_array[i]);
        meta_putchar('\n');
    }
}
