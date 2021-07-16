/*
** EPITECH PROJECT, 2020
** my revstr
** File description:
** reverses a given string
*/
#include <stdio.h>

char *my_revstr(char *str)
{
    char c = '\0';
    int a = 0;
    int i = 0;
    int j = 0;

    for (i; str[i] != '\0'; i++);
    i -= 1;
    if (i%2 == 1)
        a = i/2 + 1;
    else
        a = i/2;
    for (j; j != a; j++) {
        c = str[j];
        str[j] = str[i];
        str[i] = c;
        i -= 1;
    }
    return (str);
}
