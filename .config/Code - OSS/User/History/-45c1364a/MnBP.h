/*
** EPITECH PROJECT, 2024
** new_project
** File description:
** project.h
*/

#ifndef MM_LIB_H
    #define MM_LIB_H
typedef struct scope_s {
    void *to_free;
    struct scope_t *next;
}scope_t;
scope_t mm_scope_init(void);
void *mm_alloc(size_t size);
scope_t mm_end_task(void);
#endif
