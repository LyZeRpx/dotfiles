/*
** EPITECH PROJECT, 2024
** minishell
** File description:
** main.c
*/

#include <fcntl.h>
#include <unistd.h>

char *file_to_str(char *file)
{
    int fd = open(file, O_RDONLY);
    char buff[1000000];
    char *clone = NULL;

    read(fd, buff, 1000000);
    clone = my_strdup(clone, buff);
    return clone;
}