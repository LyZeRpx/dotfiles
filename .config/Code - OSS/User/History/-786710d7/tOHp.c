
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "my_string.h"
#include "libmeta.h"

static size_t *init_array(size_t *counter, size_t size)
{
    for (size_t i = 0; i != size; i++) {
        counter[i] = 0;
    }
    return counter;
}
static void begin_search(char **to_look, char **check_list, size_t size)
{
    size_t *counter = malloc(sizeof(int) * size);
    size_t i = 0;
    size_t j = 0;

    counter = init_array(counter, size);
    for (; to_look[i] != NULL; i++) {
        for (; check_list[j] != NULL; j++) {
            if (my_strncmp(to_look[i], check_list[j], my_strlen(check_list[j]) == 0)) {
                ++counter[j];
            }
        }
        j = 0;
    }
}

void get_files(char *file)
{
    char *config = file_to_str("config.txt");
    char *src = file_to_str(file);
    char **to_look = my_str_to_word_array(src, ' ');
    char **check_list = my_str_to_word_array(config, ' ');
    size_t size = get_array_size(check_list);

    print_dbl_array(check_list);
    //begin_search(to_look, check_list, size);
    free_dbl_array(to_look);
    free_dbl_array(check_list);
}
