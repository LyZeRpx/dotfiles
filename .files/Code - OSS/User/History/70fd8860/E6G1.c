/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** main.c
*/

#include <stdio.h>
#include "auto-review.h"

int main(int ac, char **av)
{
    if (ac != 2) {
        dprintf(2, "Invalid argumant count\n");
        return 84;
    } else {
        file_manager(av[1]);
    }
    return 0;
}
