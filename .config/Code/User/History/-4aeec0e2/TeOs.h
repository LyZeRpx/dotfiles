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

#endif
