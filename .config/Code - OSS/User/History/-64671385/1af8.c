/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** main.c
*/

#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include "minishell1.h"
#include "my_string.h"

int main(int ac, char **av, char **env)
{

    char *err = "ac is not 1\n";
    state_t *ptr = malloc(sizeof(state_t));

    ptr->cloned_env = clone_dbl_arr(env);
    ptr->is_env_changed = false;
    if (ac != 1) {
        write(2, err, my_strlen(err));
        return 84;
    } else {
        minishell1(av, ptr);
    }
    free_dbl_array(ptr->cloned_env);
    free_dbl_array(ptr->global_env);
    free(ptr);
    return 0;
}
