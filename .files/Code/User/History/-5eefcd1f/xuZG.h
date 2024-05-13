/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** structs.h
*/

#ifndef STRUCTS_H
    #define STRUCTS_H
typedef unsigned int uint;

typedef struct weapon_s
{
    char *name;
    uint dmg;
    uint weight;
    unsigned short int rarity;
}weapon_t;

typedef struct armor_s {
    uint durability;
    uint defense;
}armor_t;

typedef struct inventory_s {
    weapon_t *weapon;
    armor_t *armor;
}inventory_t;

typedef struct player_s {
    uint hp;
    uint mana;
    char *name;
    inventory_t *inv:
}player_t;

typedef struct mobs_s {

};


typedef struct game_s {
    player_t *player;
    mobs_t *mobs;
}game_t;

#endif
