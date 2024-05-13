/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include "my_string.h"

void print_dbl_array(char **dbl_array)
{
    for (int i = 0; dbl_array[i] != NULL; i++) {
        dprintf(2, "%d == %s\n", i, dbl_array[i]);
    }
}
