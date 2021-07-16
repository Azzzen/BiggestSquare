/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/
#include "my.h"

char * reduced_map (char *buffer)
{
    int j = 1;
    for (int i = 0; buffer[i] != '\n'; i++) {
        j++;
    }
    buffer = buffer + j;
    return (buffer);
}

int mesure_line(char *buffer, int linelen, int lines)
{
    for (int i = 0; buffer[i] != '\0'; i++) {
        for (; buffer[linelen] != '\n'; linelen++);
        if (buffer[i] == '\n') {
            lines++;
        }
    }
    return (linelen);
}

char * replace(char * buffer, int linelen, int lines)
{
    int j = 0;

    for (int i = 0; i < lines; i++) {
        if (buffer[j] == '.') {
            buffer[j] = '1';
        } else if (buffer[j] == 'o') {
            buffer[j] = '0';
        }
        j += linelen + 1;
    }
    for (int i = 0; buffer[i] != '\n'; i++) {
        if (buffer[i] == '.') {
            buffer[i] = '1';
        } else if (buffer[i] == 'o') {
            buffer[i] = '0';
        }
    }
    return (buffer);
}

int map_parsing(char *av)
{
    char *buffer;
    struct stat size;
    int fd = open(av, O_RDONLY);
    int linelen = 0;
    int lines = 0;

    stat(av, &size);
    buffer = malloc(sizeof(char) * (size.st_size + 1));
    buffer[size.st_size] = '\0';
    read(fd, buffer, size.st_size);
    close(fd);
    lines = my_getnbr(buffer);
    if (error_check(buffer) == 84)
        return (84);
    buffer = reduced_map(buffer);
    linelen = mesure_line(buffer, linelen, lines);
    if (linelen_check(buffer, linelen, lines) == 84)
        return (84);
    buffer = check_square(replace(buffer, linelen, lines), linelen);
    buffer = reverse(replace_by_x(buffer, linelen));
    write(1, buffer, my_strlen(buffer));
    return (0);
}

int main(int ac, char **av)
{
    int map_size = 0;
    int fd = open(av[1], O_RDONLY);

    if (fd == -1)
        return (84);
    if (ac != 2)
        return (84);
    if (map_parsing(av[1]) == 84)
        return (84);
    return (0);
}