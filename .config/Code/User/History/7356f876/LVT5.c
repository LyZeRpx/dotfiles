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
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        description();
        return 0;
    } else {
        game_control();
    }
    return 0;
}
