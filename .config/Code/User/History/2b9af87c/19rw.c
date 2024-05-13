/*
** EPITECH PROJECT, 2024
** minishell
** File description:
** main.c
*/

#include <fcntl.h>
#include <unistd.h>
#include "meta_typdefs.h"

rank1_t meta_file_to_rank1(rank1_t file)
{
    int fd = open(file, O_RDONLY);
    char buff[1000000];
    char *clone = NULL;

    read(fd, buff, 1000000);
    clone = my_strdup(clone, buff);
    return clone;
}
