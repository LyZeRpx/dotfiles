/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** tree.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_rpg.h"
#include "structs.h"

system_t *init_tree(void)
{
    system_t *system = malloc(sizeof(system_t));
    system->game = malloc(sizeof(game_t));
    system->screen = malloc(sizeof(screen_t));
    return system;
}

void free_tree(system_t *system)
{
    free(system->screen);
    free(system->game);
    free(system);
}
