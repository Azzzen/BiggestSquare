/*
** EPITECH PROJECT, 2020
** isprintable
** File description:
** description
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    if (str[i] == "") {
        return (1);
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] > 126)
            return (0);
    }
    return (1);
}
