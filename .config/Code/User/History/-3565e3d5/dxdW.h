/*
** EPITECH PROJECT, 2023
** B-MUL-100-PAR-1-1-myradar-liam.harfouche
** File description:
** radar.h
*/


#ifndef RADAR_H
    #define RADAR_H
#include <SFML/Graphics.h>
typedef struct plane_s {
    sfSprite *pl_sprite[4];
    sfTexture *pl_texture;
    sfVector2f position;
} plane_t;

typedef struct tower_s {
    sfSprite *twr_sprite[4];
    sfTexture *twr_texture;
    sfCircleShape *circle;
    sfVector2f twr_position;
} tower_t;

typedef struct bg_s {
    sfSprite *bg_sprite;
    sfTexture *bg_texture;
    sfRenderWindow *window;
    sfVideoMode mode;
} bg_t;

typedef struct tool_s {
    sfEvent event;
    sfMusic *music;
    sfText *text;
    sfFont *font;
} tool_t;

void destroy_towers(tower_t *twr);
void draw_towers(tower_t *twr, bg_t *bg);
void set_hitboxes(tower_t *twr);
void draw_planes(plane_t *pln, bg_t *bg);
void destroy_plane(plane_t *pln);
void free_all(bg_t *bg, tower_t *twr, plane_t *pln);
void set_towers(tower_t *twr);
void set_objects(bg_t *bg, tower_t *twr, plane_t *pln);
void destroy_static_obj(bg_t *bg, tower_t *twr, plane_t *pln);
void set_planes(plane_t *pln);
void move_plane(plane_t *pln, int direction);
void set_bg(bg_t *bg);
void detect_events(bg_t *ptr, sfEvent event);
int description(void);
sfRenderWindow *create_window(bg_t *ptr);

#endif /* RADAR_H */
