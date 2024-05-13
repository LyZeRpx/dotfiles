/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include ".h"

rank1_t*meta_dbl_clone(rank1_t*to_clone)
{
    int i = 0;
    size_t size = get_array_size(to_clone);
    rank1_t*clone;

    clone = malloc(sizeof(rank1_t) * (size + 1));
    for (; to_clone[i] != NULL; i++) {
        clone[i] = my_strdup(clone[i], to_clone[i]);
    }
    return clone;
}
