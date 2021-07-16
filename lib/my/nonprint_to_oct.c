/*
** EPITECH PROJECT, 2020
** nonprint to oct
** File description:
** prints unprintable char to oct
*/
#include "my.h"

int nonprint_to_oct(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32) {
            my_putchar('\\');
            my_putchar('0');
            (my_put_oct(str[i]/8));
            my_putchar((str[i]%8) + 48);
        } else  if (str[i] >= 127) {
            my_putchar('\\');
            (my_put_oct(str[i]/8));
            my_putchar((str[i]%8) + 48);
        } else {
            my_putchar(str[i]);
        }
    }
}

