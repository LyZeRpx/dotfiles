/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include "my_string.h"


int meta_(rank2_t rank2, rank1_t delim)
{
    int i = 0;
    int delim_len = my_strlen(delim);

    for (; rank2[i] != NULL; i++) {
        if (my_strncmp(rank2[i], delim, delim_len) == 0) {
            return i;
        }
    }
    return 0;
}
