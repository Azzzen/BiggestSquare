/*
** EPITECH PROJECT, 2020
** error
** File description:
** error handling bsq
*/

#include "my.h"

int error_check(char *buffer)
{
    int lines_given = my_getnbr(buffer);
    int actual_lines = 0;

    for (int i = 0; buffer[i] != '\n'; i++) {
        if (buffer[i] < '0' || buffer[i] > '9') {
            return (84);
        }
    }
    buffer = reduced_map(buffer);
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] != '\n' && buffer[i] != '.' && buffer[i] != 'o')
            return (84);
        if (buffer[i] == '\n')
            actual_lines++;
    }
    if (actual_lines != lines_given || actual_lines < 1)
        return (84);
}

int linelen_check(char *buffer, int linelen, int lines)
{
    for (int j = linelen; buffer[j+1] != '\0'; j += linelen + 1) {
        if (buffer[linelen] != buffer[j]) {
            return (84);
        }
    }
    return (linelen);
}