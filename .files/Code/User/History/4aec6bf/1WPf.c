/*
** EPITECH PROJECT, 2023
** minishell_meta_string
** File description:
** main.c
*/

#include "meta_string.h"

int meta_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        meta_putchar(str[i]);
    }
    return 0;
}
