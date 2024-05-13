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
    while (sfRender_pollEvent(, &event)) {
        if (event.type == sfEvtClosed) {
            sfRender_close();
        }
    }
}

static void refresh_screen(system_t *system)
{
    sfRender_clear(, sfWhite);
    sfRender_display();
}

static void game_loop(system_t *system, sfEvent event)
{
    while (sfRender_isOpen()) {
        event_manager(system, event);
        refresh_screen(system);
    }
}

static void destroy_assets(system_t *system)
{
    sfRender_destroy();
}


void game_control()
{
    system_t system = {0};
    sfVideoMode mode = {1920, 1080, 32};
    sfEvent event;

    system.screen. = sfRender_create(mode, "my_rpg",
                                    sfResize | sfClose, NULL);
    game_loop(&system, event);
    destroy_assets(&system);
}
