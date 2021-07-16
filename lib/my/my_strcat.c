/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** adds the content of a string to the end of another
*/
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int len;

    len = my_strlen(dest);

    while (src[i] != '\0') {
        (dest[len + i ] = src[i]);
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
}
