/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** init_game.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "tree.h"
#include "my_rpg.h"
#include "structs.h"

static void event_manager(system_t *system, sfEvent event)
{
    while (sfRenderWindow_pollEvent(system.screen.window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(system.screen.window);
        }
    }
}

static void refresh_screen(system_t *system)
{
    sfRenderWindow_clear(system.screen.window, sfWhite);
    sfRenderWindow_display(system.screen.window);
}

static void game_loop(system_t *system, sfEvent event)
{
    while (sfRenderWindow_isOpen(system.screen.window)) {
        event_manager(system, event);
        refresh_screen(system);
    }
}

static void destroy_assets(system_t *system)
{
    sfRenderWindow_destroy(system.screen.window);
}


void game_control()
{
    system_t system = {0};
    sfVideoMode mode = {1920, 1080, 32};
    sfEvent event;

    system.screen.window = sfRenderWindow_create(mode, "my_rpg",
                                    sfResize | sfClose, NULL);
    game_loop(&system, event);
    destroy_assets(&system);
}
