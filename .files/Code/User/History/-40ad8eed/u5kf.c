/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include <string.h>
#include "my_string.h"

void print_dbl_array(char **dbl_array)
{
    for (int i = 0; dbl_array[i] != NULL; i++) {
        write(2, (dbl_array[i]), strlen(dbl_array[i]));
        write(2, "\n", 1);
    }
}
