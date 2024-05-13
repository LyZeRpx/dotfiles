/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** structs.h
*/

#ifndef STRUCTS_H
    #define STRUCTS_H
    #include <SFML/Graphics.h>
    #include "my_rpg.h"

typedef unsigned int uint;

typedef struct weapon_s {
    char *name;
    uint dmg;
    uint weight;
    short int rarity;
}weapon_t;

typedef struct armor_s {
    uint durability;
    uint defense;
}armor_t;

typedef struct inventory_s {
    weapon_t *weapon;
    armor_t *armor;
}inventory_t;

typedef struct buff_item_s {
    char *talisman;
}buff_item_t;

typedef struct equiped_t {
    weapon_t weapon;
    armor_t armor;
    buff_item_t buffer;
}equiped_t;

typedef struct player_s {
    uint hp;
    uint mana;
    char *name;
    equiped_t equiped;
    inventory_t inv;
}player_t;

typedef struct boss_s {
    char *name;
    uint health;
    uint defense;
    uint dmg;
}boss_t;


typedef struct mobs_s {
    boss_t *boss;
}mobs_t;

typedef struct loot_table_s {
    void *type;
    struct loot_table_s *next;
}loot_table_t;


typedef struct game_s {
    player_t player;
    loot_table_t loot_table;
    mobs_t *mobs;
}game_t;

typedef struct screen_s {
    sfRenderWindow *window;
}screen_t;

typedef struct system_s {
    game_t game;
    screen_t screen;
}system_t;


#endif
