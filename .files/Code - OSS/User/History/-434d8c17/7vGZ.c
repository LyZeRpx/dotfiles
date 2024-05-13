/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "my_string.h"
#include "minishell1.h"

static void override_check(state_t *ptr, char *name, char *last_line, int i)
{
    int len = my_strlen(name);
    char *name_line = return_line_from_delim(ptr->global_env, name);

    if (ptr->is_env_changed == true && /*my_strncmp(name_line, name, len) == 0*/) {
        i = return_index_from_delim(ptr->global_env, name);
        ptr->global_env[i] = my_strdup(ptr->global_env[i], last_line);
    }
}

static char *check_empty(char *value, char *last_line, char *half_line)
{
    if (value != NULL) {
        last_line = my_strconcat(half_line, value);
    } else {
        last_line = my_strdup(last_line, half_line);
    }
    return last_line;
}

void builtin_setenv(char **env, char *name, char *value, state_t *ptr)
{
    int i = 0;
    char *half_line = my_strconcat(name, "=");
    char *last_line = NULL;
    char **temp = NULL;

    last_line = check_empty(value, last_line, half_line);
    temp = malloc(sizeof(char *) * (get_array_size(env) + 2));
    for (; env[i] != NULL; i++) {
        temp[i] = my_strdup(temp[i], env[i]);
    }
    if (ptr->is_env_changed == true) {
        free_dbl_array(ptr->global_env);
    } else {
        temp[i] = my_strdup(temp[i], last_line);
    }
    temp[i + 1] = NULL;
    ptr->global_env = NULL;
    ptr->global_env = clone_dbl_arr(temp);
    override_check(ptr, name, last_line, i);
    ptr->is_env_changed = true;
}
