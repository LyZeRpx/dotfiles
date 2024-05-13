/*
** EPITECH PROJECT, 2023
** meta_ranks
** File description:
** meta_rank1_offset.c
*/

#include "meta_ranks_typedefs.h"
#include "meta_libc.h"

rank1_t meta_rank1_offset(rank1_t str, rank1_t delim)
{
    return str + meta_strlen(delim);
}
