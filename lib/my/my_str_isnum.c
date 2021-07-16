/*
** EPITECH PROJECT, 2020
** isnum
** File description:
** description
*/

int my_str_isnum(char const *str)
{
    if (str == "")
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 48 || str[i] > 57) {
            return (0);
        }
    }
    return (1);
}
