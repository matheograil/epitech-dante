/*
** EPITECH PROJECT, 2022
** dante
** File description:
** checkers
*/

#include "../inc/my.h"

int checkcell(map_t *map, int y, int x)
{
    if (map->map[y][x] != '*')
        return (1);
    else return (0);
}

int left(map_t *map, int y, int x, int check)
{
    if (!checkcell(map, y, x - 1)) {
        check++;
        map->map[y][x - 1] = 'o';
        if (solve(map, y, x - 1)) check--;
    }
    return (check);
}

int down(map_t *map, int y, int x, int check)
{
    if (!checkcell(map, y + 1, x)) {
        check++;
        map->map[y + 1][x] = 'o';
        if (solve(map, y + 1, x)) check--;
    }
    return (check);
}

int right(map_t *map, int y, int x, int check)
{
    if (!checkcell(map, y, x + 1)) {
        check++;
        map->map[y][x + 1] = 'o';
        if (solve(map, y, x + 1)) check--;
    }
    return (check);
}

int up(map_t *map, int y, int x, int check)
{
    if (!checkcell(map, y - 1, x)) {
        check++;
        map->map[y - 1][x] = 'o';
        if (solve(map, y - 1, x)) check--;
    }
    return (check);
}
