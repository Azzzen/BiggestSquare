/*
** EPITECH PROJECT, 2020
** calculations
** File description:
** calculations
*/

#include "my.h"

char * check_square(char *buffer, int linelen)
{
    char a = '\0';
    char b = '\0';
    char c = '\0';

    linelen += 1;
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '.') {
            a = buffer[i - 1];
            b = buffer[i - linelen];
            c = buffer[i - linelen - 1];
            if (a > b)
                a = b;
            if (a > c)
                a = c;
            buffer[i] = a + 1;
        } else if (buffer[i] == 'o')
            buffer[i] = '0';
    }
    return (buffer);
}

int find_position(char *buffer)
{
    int pos = 0;
    int max = 0;

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] > max) {
            max = buffer[i];
            pos = i;
        }
    }
    return (pos);
}

int find_max(char *buffer)
{
    int max = 0;

    for (int i = 0; buffer[i] != '\0'; i += 1) {
        if (buffer[i] > max)
            max = (buffer[i]);
    }
    max -= 48;
    return (max);
}

char * replace_by_x(char * buffer, int linelen)
{
    int j = 0;
    int max = find_max(buffer);
    int position = find_position(buffer);

    for (int i = 0; i < max; i++) {
        buffer[position] = 'x';
        for (int c = max; c > 0; c--) {
            buffer[position - j] = 'x';
            j++;
        }
        position -= linelen + 1;
        j = 0;
    }
    return (buffer);
}

char *reverse(char * buffer)
{
    int i = 0;
    for (; buffer[i] != '\0'; i++) {
        if (buffer[i] == '0') {
            buffer[i] = 'o';
        } else if (buffer[i] > '0' && buffer[i] < ':') {
            buffer[i] = '.';
        }
    }
    return (buffer);
}
