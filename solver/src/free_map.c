/*
** EPITECH PROJECT, 2022
** FREE_MAP.C
** File description:
** FREE_MAP.C file.
*/

#include "../inc/my.h"

void free_map(char **map)
{
    for (int h = 0; map[h] != NULL; h++)
        free(map[h]);
}
