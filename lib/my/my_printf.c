/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include "my.h"

void switch_func(char *fmt, int i, va_list argp)
{
    switch (fmt[i]) {
    case 's': my_putstr(va_arg(argp, char *)); break;
    case 'd': case 'i' : my_put_nbr(va_arg(argp, int)); break;
    case 'c': my_putchar((char)va_arg(argp, int)); break;
    case 'u': my_put_un_nbr(va_arg(argp, unsigned int)); break;
    case 'o': my_put_oct(va_arg(argp, int)); break;
    case 'b': my_put_un_bin(va_arg(argp, unsigned int)); break;
    case 'x': my_put_hex(va_arg(argp, unsigned int)); break;
    case 'X': my_put_cap_hex(va_arg(argp, unsigned int)); break;
    case 'S': nonprint_to_oct((char *) va_arg(argp, int *)); break;
    case '%': my_putchar('%'); break;
    }
}

void my_printf(char *fmt, ...)
{
    va_list argp;
    va_start(argp, fmt);

    for (int i = 0; fmt[i] != '\0'; i++) {
        if (fmt[i] == '%') {
            i++;
            switch_func(fmt, i, argp);
        } else
            my_putchar(fmt[i]);
        va_end(argp);
    }
}
