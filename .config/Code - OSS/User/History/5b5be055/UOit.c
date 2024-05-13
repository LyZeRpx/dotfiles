/*
** EPITECH PROJECT, 2023
** NFS
** File description:
** loop.c
*/

#include <stdio.h>
#include <string.h>

void main_loop(void)
{
    char *sinput = NULL;
    char *data = NULL;
    size_t len = 0;

    sinput = strtok(";", sinput);
    while (1) {
        dprintf(1, "GET_INFO_LIDAR\n");
        dprintf(1, "CAR_FORWARD:1\n");
        getline(&sinput, &len, stdin);
        dprintf(2, "%s\n", sinput);
    }
}
