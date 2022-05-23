/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** mystruct
*/

#ifndef MYSTRUCT_H_
    #define MYSTRUCT_H_

typedef struct map_s {
    int rows;
    int cols;
    char *buffer;
    char **map;
} map_t;

#endif
