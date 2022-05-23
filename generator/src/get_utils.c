/*
** EPITECH PROJECT, 2022
** UTILS.C
** File description:
** UTILS.C file.
*/

#include "../inc/my.h"
#include "../inc/prototypes.h"

int is_positive_number(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return (0);
        }
    }
    return (1);
}
