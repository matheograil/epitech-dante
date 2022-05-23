/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** myf
*/

#ifndef MYF_H_
    #define MYF_H_

    void open_read_file(char const *filepath, map_t *map);
    void get_infomap(map_t *map);
    void get_map(map_t *map);
    void printmap(map_t *map);
    int solve(map_t *map, int y, int x);
    int up(map_t *map, int y, int x, int check);
    int right(map_t *map, int y, int x, int check);
    int down(map_t *map, int y, int x, int check);
    int left(map_t *map, int y, int x, int check);
    int checkcell(map_t *map, int y, int x);
    void free_map(char **map);

#endif
