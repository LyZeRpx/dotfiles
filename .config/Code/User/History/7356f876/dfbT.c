/*
** EPITECH PROJECT, 2024
** minishell
** File description:
** main.c
*/

#include <stdlib.h>
#include <unistd.h>
#include "my_rpg.h"
#include "structs.h"

int main(int ac, char **av)
{
    window_t *ptr = malloc(sizeof(window_t));

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        description();
        free(ptr);
        return 0;
    } else {
        init_game(ptr);
    }
    free(ptr);
    return 0;
}
