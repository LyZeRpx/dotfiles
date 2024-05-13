/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** init_game.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "my_rpg.h"
#include "structs.h"

static void event_manager(system_t *system, sfEvent event)
{
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(system->screen.window);
        }
    }
}

static void refresh_sprite(system_t *system, sprites_t *sprites)
{
    if (sprites->sprite == NULL)
        return;
    for (size_t i = 0; sprites->sprite[i] != NULL; i++)
        sfRenderWindow_drawSprite(system->screen.window,
        sprites->sprite[i], NULL);
}

static void refresh_screen(system_t *system, sprites_t *sprites)
{
    sfRenderWindow_clear(system->screen.window, sfWhite);
    refresh_sprite(system, sprites);
    sfRenderWindow_display(system->screen.window);
}

static void game_loop(system_t *system, sfEvent event, sprites_t *sprites)
{
    while (sfRenderWindow_isOpen(system->screen.window)) {
        event_manager(system, event);
        refresh_screen(system, sprites);
    }
}

static void destroy_assets(system_t *system)
{
    sfRenderWindow_destroy(system->screen.window);
}

void game_control(void)
{
    system_t system = {0};
    sfVideoMode mode = {1920, 1080, 32};
    sfEvent event;
    sprites_t *sprites = malloc(sizeof(sprites_t));

    system.screen.window = sfRenderWindow_create(mode, "my_rpg",
                                    sfResize | sfClose, NULL);
    destroy_assets(&system);
}
