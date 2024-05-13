/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stdbool.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include "my_string.h"
#include "minishell1.h"

int execute_cmd(char **process, int *status, state_t *ptr)
{
    int pid = 0;

    pid = fork();
    if (pid == 0) {
        find_path_and_exec(process, ptr->cloned_env);
        exit(0);
    } else {
        wait(status);
    }
    return 0;
}
