/*
** EPITECH PROJECT, 2024
** minishell
** File description:
** main.c
*/

#include <unistd.h>
#include "my_rpg.h"

int main(void)
{
    window_t *ptr = malloc(sizeof(window_t));
    init_game(ptr);
    free(ptr);
    return 0;
}
