/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** main.c
*/

#include <stdio.h>
#include "auto-review.h"
#include "my_string.h"

int main(int ac, char **av)
{
    if (ac != 2) {
        dprintf(2, "Invalid argumant count\n");
        return 84;
    } else {
        file_to_str(av[1]);
    }
    return 0;
}
