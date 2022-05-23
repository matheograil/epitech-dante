/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** count a string
*/

int my_strlen(char const *str)
{
    int j = 0;

    while (str[j] != '\0') {
        j++;
    }
    return (j);
}
