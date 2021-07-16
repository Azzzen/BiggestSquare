/*
** EPITECH PROJECT, 2020
** my is prime
** File description:
** determines if a number is prime
*/

int my_is_prime(int nb)
{
    int i = 2;

    if (nb <= 0){
        return (0);
    }
    while (nb%i != 0){
        i++;
        if (i == nb){
            return (1);
        }
    }
    return (0);
}

