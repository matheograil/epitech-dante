/*
** EPITECH PROJECT, 2022
** MY_PUTSTR.C
** File description:
** MY_PUTSTR function.
*/

#include "../inc/my.h"

void my_putstr(char *str, int str_len)
{
    write(1, str, str_len);
}
