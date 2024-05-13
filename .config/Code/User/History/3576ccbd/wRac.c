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
    while (sfRenderWindow_pollEvent(WINDOW, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(WINDOW);
        }
    }
}

static void refresh_screen(system_t *system)
{
    sfRenderWindow_clear(WINDOW, sfWhite);
    sfRenderWindow_display(WINDOW);
}

static void game_loop(system_t *system, sfEvent event)
{
    while (sfRenderWindow_isOpen(WINDOW)) {
        event_manager(system, event);
        refresh_screen(system);
    }
}

static void destroy_assets(system_t *system)
{
    sfRenderWindow_destroy(WINDOW);
}


void game_control()
{
    system_t system = {0};
    sfVideoMode mode = {1920, 1080, 32};
    sfEvent event;
    system->game->player->hp = 150;
    printf("player hp = %u\n", )
    // WINDOW = sfRenderWindow_create(mode, "msystem->game->player->hpy_rpg",
    //                         sfResize | sfClose, NULL);
    // // game_loop(&system, event);
    // // destroy_assets(&system);
}
