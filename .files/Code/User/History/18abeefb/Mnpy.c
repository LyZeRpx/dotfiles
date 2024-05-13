/*
** EPITECH PROJECT, 2024
** stumper
** File description:
** stumper
*/

#include "my_string.h"
#include "libmeta.h"
#include "lingo_game.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

static char *match_table(char *matches, char *input, char *to_find)
{
    for (int i = 0; to_find[i] != '\0'; i++) {
        if (to_find[i] == input[i]) {
            matches[i] = to_find[i];
        }
        if (to_find[i] != input[i]) {
            matches[i] = '*';
        }
    }
    return matches;
}

static void print_matches(char *matches, bool first_call)
{
    if (first_call == true) {
        dprintf(1, "%s\n", matches);
    }
}

static void free_all(char *matches, char *to_find, char **dbl_array)
{
    free(matches);
    free(to_find);
    free_dbl_array(dbl_array);
    exit(0);
}

int handle_errors(char *input, char *to_find, char *matches, char **dbl_array)
{
    bool first_call = true;

    if (matches == NULL) {
        return 84;
    }
    if (strlen(input) < strlen(to_find)) {
        dprintf(2, "Word too short. Retry\n>");
        first_call = false;
        lingo_compare(to_find, dbl_array, first_call);
    } else if ((strlen(input) - 1) > strlen(to_find)) {
        dprintf(2, "Word too long. Retry\n>");
        first_call = false;
        lingo_compare(to_find, dbl_array, first_call);
    }
    return 0;
}

int lingo_compare(char *to_find, char **dbl_array, bool first_call)
{
    char *matches = malloc(sizeof(char) * strlen(to_find));
    char *input = NULL;
    size_t len = 0;

    getline(&input, &len, stdin);
    handle_errors(input, to_find, matches, dbl_array);
    matches = match_table(matches, input, to_find);
    print_matches(matches, first_call);
    if (strcmp(matches, to_find) == 0) {
        dprintf(1, "\nYou won!\n");
        free_all(matches, to_find, dbl_array);
    }
    return 0;
}

static void game(char *to_find, char **dbl_array)
{
    int to_find_len = strlen(to_find);
    bool first_call = true;

    for (int i = 0; i != to_find_len; i++) {
        dprintf(1, "\nRound %d\n>", i + 1);
        lingo_compare(to_find, dbl_array, first_call);
    }
    dprintf(1, "\nYou lost!\n");
    free(to_find);
    free_dbl_array(dbl_array);
    exit(0);
}

void lingo(char *filename)
{
    char *str = file_to_str(filename);
    char **dbl_array = my_str_to_word_array(str, '\n');
    int randint = 1;
    char *to_find = strdup(dbl_array[randint]);

    dprintf(1, "*: invalid letter\n?: incorrectly plzced letter\n");
    dprintf(1, "Will you find the secret word ?\n");
    dprintf(1, "%c", to_find[0]);
    for (int i = 1; to_find[i] != '\0'; i++) {
        putchar('*');
    }
    putchar('\n');
    game(to_find, dbl_array);
}
