/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** concatenates two strings
*/

char *my_strstr(char *str, char const *to_find)
{
    int j = 0;
    int c = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        c = i;
        if (str[i] == to_find[j]) {
            j++;
            i++;
        }
        i = c;
        if (to_find[j] == '\0')
            return (str[i]);
        i++;
        j++;
    }
}
