/*
** EPITECH PROJECT, 2023
** lyzr_libc
** File description:
** lyzr_putint.c
*/

#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c, 1);
}
static int get_unit(int n)
{
    int i = 1;

    for(; i < n; i *= 10);
    return i;
}
void lyzr_putnbr(int n)
{
    int unit = get_unit(n);

    my_putchar((n / unit) + 48);
    if (n != 0) {
        lyzr_putnbr(n % unit);
    }
}

int main(void)
{
    lyzr_putnbr(42);
}
