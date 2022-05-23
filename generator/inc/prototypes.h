/*
** EPITECH PROJECT, 2022
** PROTOTYPES.H
** File description:
** PROTOTYPES.H file.
*/

#ifndef PROTOTYPES_H_

    #define PROTOTYPES_H_

void free_map(char **);

int main(int, char **);

char **get_empty_map(int, int);

void make_maze_algorithm(char **, int *);
void make_maze_special_cases(char **, int, int);
void make_imperfect_maze(char **, int);
void make_maze(int, int, int);

void print_map(char **, int);

int is_positive_number(char *);

#endif
