/*
** EPITECH PROJECT, 2019
** put nbr
** File description:
** hexa
*/

#include "../include/my.h"

void my_put_nbr_lxmaj(long nb)
{
    long a;

    for (; nb < 0;)
    {
        write(1, "-", 1);
        nb = nb * (-1);
    }
    if (nb > 0)
    {
        a = (nb % 16);
        nb = ((nb - a) / 16);
        my_put_nbr_lxmaj(nb);
        if (a <= 9)
            my_putchar(a + 48);
        else {
            my_putchar(a + 55);
        }
    }
}
