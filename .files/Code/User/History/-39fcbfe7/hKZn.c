/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include "meta_libc.h"


rank1_t meta_rank1_in_rank2(rank2_t array, rank1_t delim)
{
    int i = 0;
    int delim_len = my_strlen(delim);

    for (; array[i] != NULL; i++) {
        if (my_strncmp(array[i], delim, delim_len) == 0) {
            return array[i];
        }
    }
    return NULL;
}
