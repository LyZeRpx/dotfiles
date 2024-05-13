#include "my_libc.h"
void my_putstr(char *str)
{
    for(int i = 0; str[i]; i++) {
        my_putchar(str[i]);
    }
}
