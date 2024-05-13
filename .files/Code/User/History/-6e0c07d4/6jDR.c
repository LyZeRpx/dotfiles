/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include "my_string.h"


int meta_(rank2_t dbl_array, rank1_tdelim)
{
    int i = 0;
    int delim_len = my_strlen(delim);

    for (; env[i] != NULL; i++) {
        if (my_strncmp(env[i], delim, delim_len) == 0) {
            return i;
        }
    }
    return 0;
}
