/*
** EPITECH PROJECT, 2024
** libmeta
** File description:
** Header for all functions corresponding to the "rank2_t variables".
*/

#ifndef META_RANK2_H
    #define META_RANK2_H
    #include "meta_pm_typedefs.h"
rank2_t meta_extend_rank2(rank2_t parent, size_t added_slots);
void meta_free_rank2(rank1_t*dbl_array);
void meta_print_rank2(rank2_t array);
rank1_t meta_rank1_in_rank2(rank2_t array, rank1_t delim);
int meta_rank1_in_rank2_index(rank2_t array, rank1_t delim);
rank2_t meta_rank2_clone(rank2_t to_clone);
int meta_rank2_size(rank2_t dbl_array);
#endif
