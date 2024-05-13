/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include "my_string.h"


rank1_t return_line_from_delim(rank2_t array, rank1_tdelim)
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
