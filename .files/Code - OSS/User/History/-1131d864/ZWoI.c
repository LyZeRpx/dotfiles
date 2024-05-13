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

void check_command(char *command, char **av, state_t *ptr)
{
    int *status = NULL;
    bool running = true;
    char **process;
    char *tmp = NULL;
    char *buff = NULL;

    process = my_str_to_word_array(command, ' ');
    for (int i = 1; process[i]; i++)
        process[i] = strcut(process[i], '\n');
    if (check_builtins(process, ptr) != 0)
        execute_cmd(process, status, ptr);
    free_dbl_array(process);
}
