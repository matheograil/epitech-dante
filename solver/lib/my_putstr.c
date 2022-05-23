/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** display a string
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int j = 0;

    while (str[j] != '\0') {
        my_putchar(str[j]);
        j++;
    }
    return (0);
}
