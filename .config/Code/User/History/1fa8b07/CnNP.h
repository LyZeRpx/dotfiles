/*
** EPITECH PROJECT, 2024
** new_project
** File description:
** project.h
*/

#ifndef MY_RPG_H
    #define MY_RPG_H
    #include <SFML/Graphics.h>
void description(void);
typedef struct window_s {
    sfRenderWindow *window;
}window_t;
void init_game(window_t *ptr);

#endif
