/*
** EPITECH PROJECT, 2020
** my compute square root
** File description:
** returns the square root of a number
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    if (nb <= 0){
        i = 0;
    }
    while (i*i <=  nb){
        if (i*i < nb){
            i = i+1;
        } else if (i*i == nb){
                return (nb);
            }
    }
    return (0);
}
