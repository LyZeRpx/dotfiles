/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/
#include <stdlib.h>
#include "my_string.h"
#include "minishell1.h"

static char **fill_and_skip(char **src, char *to_skip)
{
    int j = 0;
    size_t size = get_array_size(src);
    char **tmp = malloc(sizeof(char *) * size);

    for (int i = 0; src[i] != NULL; i++) {
        if (i == return_index_from_delim(src, to_skip)) {
            continue;
        }
        tmp[j] = my_strdup(tmp[j], src[i]);
        j++;
    }
    return tmp;
}

void builtin_unsetenv(char *name, state_t *ptr)
{
    char **tmp = NULL;

    if (ptr->is_env_changed == true) {
        if (return_index_from_delim(ptr->global_env, name) == 0) {
            return;
        }
        tmp = fill_and_skip(ptr->global_env, name);
        free_dbl_array(ptr->global_env);
        ptr->global_env = clone_dbl_arr(tmp);
    } else {
        if (return_index_from_delim(ptr->cloned_env, name) == 0) {
            return;
        }
        tmp = fill_and_skip(ptr->cloned_env, name);
        free_dbl_array(ptr->cloned_env);
        ptr->cloned_env = clone_dbl_arr(tmp);
    }
}
