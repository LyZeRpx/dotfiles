/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "libmeta.h"
#include "my_string.h"

rank1_t*up_morph_dbl_arr(rank1_t*progenitor, size_t extend, rank1_textention)
{
    static int i = 0;
    size_t size = get_array_size(progenitor) + extend;
    rank1_t*morph;

    morph = malloc(sizeof(rank1_t) * (size + 1));
    for (; progenitor[i] != NULL; i++) {
        morph[i] = my_strdup(morph[i], progenitor[i]);
    }
    morph[i] = my_strdup(morph[i], extention);
    return morph;
}
