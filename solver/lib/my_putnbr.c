/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** print a nbr
*/

void my_putchar(char c);

int my_putnbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -(1);
    }
    if (nb <= 9) {
        my_putchar(nb + 48);
    }
    if (nb > 9) {
        my_putnbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
    return (nb);
}
