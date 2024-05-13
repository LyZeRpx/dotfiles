/*
** EPITECH PROJECT, 2023
** minishell_my_string
** File description:
** main.c
*/

char *meta_cut_rank1(char *str, char limiter)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == limiter) {
            str[i] = '\0';
        }
    }
    return str;
}
