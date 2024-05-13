/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include "meta_libc.h"


int meta_rank1_in_rank2_index(rank2_t array, rank1_t delim)
{
    int i = 0;
    int delim_len = meta_strlen(delim);

    for (; array[i] != NULL; i++) {
        if (meta_strncmp(array[i], delim, delim_len) == 0) {
            return i;
        }
    }
    return 0;
}
