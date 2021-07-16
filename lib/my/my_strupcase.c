/*
** EPITECH PROJECT, 2020
** upcase
** File description:
** desc
*/

char *my_strupcase(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        for (int i = 0; str[i] > 96 && str[i] < 123; i++) {
            str[i] = str[i] - 32;
        }
    }
    return (str);
}
