/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** descripton
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    while (s1){
        if (s1[i] > s2[i])
            return (1);
        else if (s1[i] < s2[i])
            return (-1);
        else (s1[i] == s2[i]);
            return (0);
        i++;
    }
}
