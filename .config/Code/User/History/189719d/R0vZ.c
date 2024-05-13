/*
** EPITECH PROJECT, 2023
** modules
** File description:
** meta_rank1tok.c
*/

#include "meta_pm_typedefs.h"

rank1_t meta_rank1tok(static rank1_t str, char delim)
{
    static rank1_t token = NULL;

    if (str == NULL) {
        meta_rank1tok(str, delim);
    }
    for (static int i = 0; str[i] != delim; i++) {
        token[i] = str[i];
    }
}
