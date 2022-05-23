/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** infomap
*/

#include "../inc/my.h"

void getrows(map_t *map)
{
    map->rows = 0;
    for (int i = 0; map->buffer[i]; i++) {
        if (map->buffer[i] == '\n')
            map->rows++;
    }
    map->rows++;
}

void getcols(map_t *map)
{
    map->cols = 0;
    for (int i = 0; map->buffer[i] != '\n'; i++)
        map->cols++;
}

void get_infomap(map_t *map)
{
    getrows(map);
    getcols(map);
}
