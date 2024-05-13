/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** init_game.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "tree.h"
#include "my_rpg.h"
#include "structs.h"

static void event_manager(system_t *system, sfEvent event)
{
    while (sfRenderWindow_pollEvent(system->window->window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(system->window->window);
        }
    }
}

static void refresh_screen(window_t *system)
{
    sfRenderWindow_clear(system->window, sfWhite);
    sfRenderWindow_display(system->window);
}

static void game_loop(system_t *system, sfEvent event)
{
    while (sfRenderWindow_isOpen(system->window)) {
        event_manager(system, event);
        refresh_screen(system);
    }
}

static void destroy_assets(system_t *system)
{
    sfRenderWindow_destroy(system->window);
}


void game_control()
{
    system_t *system = init_tree();
    sfVideoMode mode = {1920, 1080, 32};
    sfEvent event;

    system->window = sfRenderWindow_create(mode, "my_rpg",
                            sfResize | sfClose, NULL);
    game_loop(system->window, event);
    destroy_assets(system);
    free_tree(system);
}
