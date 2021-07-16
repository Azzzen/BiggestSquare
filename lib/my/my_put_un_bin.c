/*
** EPITECH PROJECT, 2020
** my_put_un_bin
** File description:
** displays an unsigned binary number
*/
#include "my.h"

unsigned int my_put_un_bin(unsigned int i)
{
    if (i == 0) {
        my_putchar(0);
    } else {
        my_putchar((i % 2 + 10 * my_put_un_bin(i / 2))+38);
    }
}