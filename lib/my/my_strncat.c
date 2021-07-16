/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** description
*/
#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;

    j = my_strlen(dest);
    i = 0;
    while (src[i] != '\0' && i < nb) {
        dest[j+i] = src [i];
        i++;
    }
}
