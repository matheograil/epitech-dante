/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** get_map
*/

#include "../inc/my.h"

void get_map(map_t *map)
{
    int i = 0;
    int c = 0;

    map->map = malloc(sizeof(char *) * (map->rows + 1));
    for (int l = 0; l < map->rows; l++) {
        map->map[l] = malloc(sizeof(char) * (map->cols + 1));
        for (; map->buffer[i] != '\n' && map->buffer[i] != '\0'; c++) {
            map->map[l][c] = map->buffer[i];
            i++;
        }
        map->map[l][c] = '\0';
        c = 0;
        i++;
    }
}
