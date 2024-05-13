/*
** EPITECH PROJECT, 2023
** NFS
** File description:
** loop.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include "need4stek.h"
#include "my_string.h"
#include "libmeta.h"

static float choose_direction(char **rays)
{
    float moy_right = 0;
    float moy_left = 0;
    float max_dist = 2500;

    for (int i = 0; i < 16; i++)
        moy_left += atof(rays[i]);
    for (int i = 16; i < 32; i++)
        moy_right += atof(rays[i]);
    if (moy_left >= moy_right)
        return 1;
    return -1;
}

static void win_loose_check(char **rays, char *sinput)
{
    clock_t begin;
    clock_t end;
    unsigned int i = 0;

    begin = clock();
    time_spent = (double)begin / CLOCKS_PER_SEC;
    if (atof(rays[16]) == 0 || atof(rays[0] == 0 || atof(rays[31]) == 0)) {
        for(;; i++) {
            time_spent = (double)(clock() - begin) / CLOCKS_PER_SEC;
            if (time_spent>=5.0) {
                break;
            }
        }
    }
}

static float alt_checks(float dist, float direction, char **rays)
{
    size_t len = 0;
    char *sinput = NULL;

    if (dist <= 400 && dist >= 300) {
        dprintf(1, "WHEELS_DIR:%f\n", 0.3 * direction);
        getline(&sinput, &len, stdin);
        return 0.2;
    }
    if (dist < 300) {
        dprintf(1, "WHEELS_DIR:%f\n", 0.6 * direction);
        getline(&sinput, &len, stdin);
        return 0.1;
    }
    win_loose_check(rays, sinput);
    return 0;
}

static float get_angle(char **rays, int *nb_same, float *nb_last)
{
    size_t len = 0;
    char *sinput = NULL;
    float dist = (atof(rays[15]) + atof(rays[16])) / 2;
    float direction = choose_direction(rays);

    if (dist >= 800) {
        dprintf(1, "WHEELS_DIR:%f\n", 0.1 * direction);
        getline(&sinput, &len, stdin);
        return 0.4;
    }
    if (dist < 800 && dist > 400) {
        dprintf(1, "WHEELS_DIR:%f\n", 0.2 * direction);
        getline(&sinput, &len, stdin);
        return 0.3;
    }
    alt_checks(dist, direction, rays);
    return 0;
}

void main_loop(char *sinput)
{
    int nb_same = 0;
    float last_nb = 0;
    char *data = NULL;
    size_t len = 0;
    int max_dist = 0;
    char **dbl_array = NULL;
    float speed = 1;
    float angle = 0;

    while (1) {
        dprintf(1, "CAR_FORWARD:%f\n", speed);
        dprintf(2, "CAR_FORWARD:%f\n", speed);
        getline(&sinput, &len, stdin);
        dprintf(1, "GET_INFO_LIDAR\n");
        getline(&sinput, &len, stdin);
        dprintf(2, "j'ai envie de pleurer = %s\n", sinput);
        data = strdup(sinput);
        dbl_array = my_str_to_word_array(data + 22, ':');
        speed = get_angle(dbl_array, &nb_same, &last_nb);
    }
}
