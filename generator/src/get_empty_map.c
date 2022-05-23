/*
** EPITECH PROJECT, 2022
** GET_EMPTY_MAP.C
** File description:
** GET_EMPTY_MAP.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

char **get_empty_map(int h, int w)
{
    char **map = malloc(sizeof(char *) * (h + 1));

    for (int i = 0; i < h; i++) {
        map[i] = malloc(sizeof(char *) * (w + 1));
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            ((j % 2) == 0 && (i % 2) == 0) ? (map[i][j] = '*')
                : (map[i][j] = 'X');
            ((j + 1) > w) ? (map[i][j + 1] = '\0') : (0);
        }
    }
    map[h] = NULL;
    return (map);
}
