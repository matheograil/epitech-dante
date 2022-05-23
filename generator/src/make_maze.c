/*
** EPITECH PROJECT, 2022
** MAKE_MAZE.C
** File description:
** MAKE_MAZE.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

void make_maze_algorithm(char **map, int *current_pos)
{
    int rand_nb = rand() % 2;

    if (rand_nb == 0 && (current_pos[1] - 1) >= 0) {
        map[current_pos[0]][current_pos[1] - 1] = '*';
    } else if (rand_nb == 0 && (current_pos[0] - 1) >= 0) {
        map[current_pos[0] - 1][current_pos[1]] = '*';
    }
    if (rand_nb == 1 && (current_pos[0] - 1) >= 0) {
        map[current_pos[0] - 1][current_pos[1]] = '*';
    } else if (rand_nb == 1 && (current_pos[1] - 1) >= 0) {
        map[current_pos[0]][current_pos[1] - 1] = '*';
    }
}

void make_maze_special_cases(char **map, int h, int w)
{
    if (((h % 2) == 0 && (w % 2) != 0) || ((h % 2) != 0 && (w % 2) == 0)) {
        map[h - 1][w - 1] = '*';
    }
    if ((h % 2) == 0 && (w % 2) == 0) {
        map[h - 1][w - 2] = '*';
        map[h - 1][w - 1] = '*';
    }
}

void make_imperfect_maze(char **map, int h)
{
    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            (i == (h - 1) || i == (h - 2)) ? (map[i][j] = '*') : (0);
        }
    }
}

void make_maze(int h, int w, int perfect)
{
    char **map = get_empty_map(h, w);
    int current_pos[2];

    srand(time(NULL));
    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            ((i % 2) == 0 && (j % 2) == 0)
                ? (current_pos[0] = i, current_pos[1] = j,
                make_maze_algorithm(map, current_pos)) : (0);
        }
    }
    if (perfect == 1) {
        make_maze_special_cases(map, h, w);
    } else {
        make_imperfect_maze(map, h);
    }
    print_map(map, w);
    free_map(map);
}
