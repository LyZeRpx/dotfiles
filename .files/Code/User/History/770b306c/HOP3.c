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
    system->window = malloc(sizeof(window_t));
    return system;
}
