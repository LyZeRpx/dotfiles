/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <errno.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include "my_string.h"
#include "minishell1.h"

void builtin_cd(char **process, state_t *ptr)
{
    char *path = NULL;
    static char cwd[1024] = {0};

    if (process[1] == NULL || my_strcmp(process[1], "~") == 0) {
        path = strtok(return_line_from_delim(ptr->cloned_env, HOME), HOME);
    } else if (my_strcmp(process[1], "-") == 0) {
        path = my_strdup(path, cwd);
        mini_printf("%s\n", cwd);
    } else {
        path = my_strdup(path, process[1]);
    }
    getcwd(cwd, 1024);
    if (chdir(path) == -1) {
        mini_printf("%s: %s.\n", path, strerror(errno));
    }
}
