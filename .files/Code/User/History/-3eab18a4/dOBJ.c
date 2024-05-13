/*
** EPITECH PROJECT, 2023
** minishell_metastring
** File description:
** main.c
*/

#include <stdlib.h>
#include <stddef.h>
#include "meta_ranks_typedefs.h"

void meta_free_rank2(rank1_t*dbl_array)
{
    for (int i = 0; dbl_array[i] != NULL; i++) {
        free(dbl_array[i]);
    }
    free(dbl_array);
}