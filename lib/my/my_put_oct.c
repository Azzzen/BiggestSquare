/*
** EPITECH PROJECT, 2020
** my_put_oct
** File description:
** displays an oct number
*/
#include "my.h"

unsigned int my_put_oct( unsigned int i)
{
    if (i >= 8)
        (my_put_oct(i/8));
    my_putchar((i%8) + 48);
}
