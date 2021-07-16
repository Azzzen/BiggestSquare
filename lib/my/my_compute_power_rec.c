/*
** EPITECH PROJECT, 2020
** my compute power rec
** File description:
** task 4
*/

int my_compute_power_rec(int nb, int p)
{
    int final = 0;

    if (nb == 0 || p < 0) {
        return (nb = 1);
    }
    final = (nb * my_compute_power_rec(nb, p-1));
    if (final > 2147483647 || final < (-2147483647 - 1)) {
        return (final);
    } else {
        return (1);
    }
}
