/*
** EPITECH PROJECT, 2024
** minishell
** File description:
** main.c
*/

#include <unistd.h>
#include "my_rpg.h"

int main(int ac, char **av)
{
    window_t *ptr = malloc(sizeof(window_t));
    init_game(ptr);
     if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        description();
        return 0;
    } else {
        game_loop(bg, tool, twr, pln);
        return 0;
    }
    free(ptr);
    return 0;
}
