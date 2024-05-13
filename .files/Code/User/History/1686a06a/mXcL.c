/*
** EPITECH PROJECT, 2023
** minishell_meta_string
** File description:
** main.c
*/

#include "meta_ranks_typedefs.h"

rank1_t strcut(rank1_t str, char cut_at)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == cut_at) {
            str[i] = '\0';
        }
    }
    return str;
}
