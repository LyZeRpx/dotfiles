/*
** EPITECH PROJECT, 2023
** mmlib
** File description:
** mm_alloc.c
*/

#include "mm_lib.h"

void *mm_alloc(void)
{
    void *ptr = malloc(sizeof(*type) * size);
    free_list->to_free = &ptr;
    return ptr;
}

scope_t scope_init()
{
    scope_t *scope = malloc(sizeof (scope_t));
    
}