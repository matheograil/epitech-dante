/*
** EPITECH PROJECT, 2022
** PRINT_MAP.C
** File description:
** PRINT_MAP.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

void print_map(char **map, int w)
{
    for (int h = 0; map[h] != NULL; h++) {
        my_putstr(map[h], w);
        (map[h + 1] != NULL) ? (my_putchar('\n')) : (0);
    }
}
