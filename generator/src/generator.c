/*
** EPITECH PROJECT, 2022
** GENERATOR.C
** File description:
** GENERATOR.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

int main(int ac, char **av)
{
    if (ac == 3 && is_positive_number(av[1]) == 1
        && is_positive_number(av[2]) == 1
        && my_atoi(av[1]) > 0 && my_atoi(av[2]) > 0) {
        make_maze(my_atoi(av[2]), my_atoi(av[1]), 0);
        return (0);
    } else if (ac == 4 && is_positive_number(av[1]) == 1
        && is_positive_number(av[2]) == 1
        && my_strcmp(av[3], "perfect") == 0
        && my_atoi(av[1]) > 0 && my_atoi(av[2]) > 0) {
        make_maze(my_atoi(av[2]), my_atoi(av[1]), 1);
        return (0);
    }
    return (84);
}
