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

static void alloc_tree(game_t *game)
{

}

int main(int ac, char **av)
{
    game_t *game = malloc(sizeof(game_t));
    game->player = malloc(sizeof(player_t));
    game->player->hp = 150;
    printf("player health is %u\n", game->player->hp);
    // window_t *ptr = malloc(sizeof(window_t));

    // if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
    //     description();
    //     free(ptr);
    //     return 0;
    // } else {
    //     init_game(ptr);
    // }
    // free(ptr);
    free(game);
    return 0;
}
