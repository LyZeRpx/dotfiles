/*
** EPITECH PROJECT, 2023
** mmlib
** File description:
** mm_alloc.c
*/

#include "mm_lib.h"

void *mm_alloc(void)
{
    scope_t free_list;
    void *ptr = malloc(sizeof(*type) * size);
    free_list->to_free = &ptr;
    return ptr;
}

scope_t 