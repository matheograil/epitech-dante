/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** antman
*/

#include "../inc/my.h"

void myfree(map_t *map)
{
    free_map(map->map);
    free(map);
}

void printmap(map_t *map)
{
    for (int i = 0; i < map->rows - 1; i++)
        printf("%s\n", map->map[i]);
    printf("%s", map->map[map->rows - 1]);
}

int main(int ac, char *av[])
{
    int y = 0;
    int x = 0;
    map_t *map = malloc(sizeof(map_t));

    if (ac != 2)
        exit(84);
    else {
        open_read_file(av[1], map);
        get_infomap(map);
        get_map(map);
        map->map[0][0] = 'o';
        solve(map, y, x);
        printmap(map);
        myfree(map);
    }
    return 0;
}
