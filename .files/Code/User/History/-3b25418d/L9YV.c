/*
** EPITECH PROJECT, 2023
** B-AIA-200-PAR-2-1-n4s-louis.thomas
** File description:
** main.c
*/

#include <stdio.h>
#include "need4stek.h"

int main(void)
{
    char *sinput = NULL;
    size_t len = 0;

    dprintf(1, "START_SIMULATION\n");
    getline(&sinput, &len, stdin);
    main_loop(sinput);
    dprintf(1, "STOP_SIMULATION\n");
    return 0;
}
