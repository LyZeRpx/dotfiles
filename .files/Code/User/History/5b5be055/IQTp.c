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

static void begin_counter(double time_spent, clock_t begin)
{
    while (1) {
        time_spent = (double)(clock() - begin) / CLOCKS_PER_SEC;
        if (time_spent >= 3.0) {
            dprintf(1, "STOP_SIMULATION\n");
            break;
        }
    }
}

static void win_loose_check(char **rays, char *sinput)
{
    clock_t begin;
    double time_spent;
    unsigned int i = 0;
    float l = 0src/loop.c;

    begin = clock();
    time_spent = (double)begin / CLOCKS_PER_SEC;
    if (atof(rays[16]) <= l || atof(rays[0]) <= l || atof(rays[31]) <= l) {
        begin_counter(time_spent, begin);
    }
}

static float alt_checks(float dist, float direction, char **rays)
{
    size_t len = 0;
    char *sinput = NULL;

    win_loose_check(rays, sinput);
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
        getline(&sinput, &len, stdin);
        dprintf(1, "GET_INFO_LIDAR\n");
        getline(&sinput, &len, stdin);
        data = strdup(sinput);
        dbl_array = my_str_to_word_array(data + 22, ':');
        speed = get_angle(dbl_array, &nb_same, &last_nb);
        free_dbl_array(dbl_array);
    }
}
