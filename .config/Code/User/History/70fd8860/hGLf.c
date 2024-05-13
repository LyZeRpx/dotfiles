// /*
// ** EPITECH PROJECT, 2023
// ** minishell
// ** File description:
// ** main.c
// */

// #include <stdio.h>
// #include "auto-review.h"
// #include "my_string.h"

// int main(int ac, char **av)
// {
//     if (ac != 2) {
//         dprintf(2, "Invalid argumant count\n");
//         return 84;
//     } else {
//         get_files(av[1]);
//     }
//     return 0;
// }
/*
** EPITECH PROJECT, 2024
** test
** File description:
** test.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void check_line(int *words, char **wm, int wc, char *line)
{
    char *cline;

    for (int i = 0; i < wc; i++) {
        cline = line;
        while (cline != NULL) {
            cline = strcasestr(cline, wm[i]);
            if (cline != NULL) {
                cline += strlen(wm[i]);
                words[i]++;
            }
        }
    }
}

int main(int argc, char **argv)
{
    char *filepath = argv[1];
    int *words = calloc(argc, sizeof(int));
    FILE *f = fopen(filepath, "r");
    size_t size = 0;
    int status = 0;
    char *line = NULL;

    while (status != -1) {
        status = getline(&line, &size, f);
        check_line(words, &argv[2], argc - 2, line);
    }
    for (int i = 2; i < argc; i++)
        printf("%s; %d\n", argv[i], words[i - 2]);
    free(line);
    free(words);
    fclose(f);
}
