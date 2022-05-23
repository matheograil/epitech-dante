/*
** EPITECH PROJECT, 2022
** dante
** File description:
** solving
*/

#include "../inc/my.h"

int solve(map_t *map, int y, int x)
{
    int check = 0;

    if (y == map->rows - 1 && x == map->cols - 1)
        return (0);
    if (x + 1 <= map->cols - 1)
        check = right(map, y, x, check);
    if (y + 1 <= map->rows - 1)
        check = down(map, y, x, check);
    if (x - 1 >= 0)
        check = left(map, y, x, check);
    if (y - 1 >= 0)
        check = up(map, y, x, check);
    if (check == 0) {
        map->map[y][x] = '*';
        return (1);
    }
    return (0);
}
