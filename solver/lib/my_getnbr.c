/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** get nbr of a sting
*/

int my_getnbr(char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    if (str[i] == '-') {
        sign = -1;
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            break;
        }
        res = res * 10 + str[i] - '0';
        i++;
    }
    res *= sign;
    return (res);
}
