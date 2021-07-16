/*
** EPITECH PROJECT, 2020
** my find prime sup
** File description:
** description
*/
#include "my.h"

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) != 1) {
        nb++;
    }
    return (nb);
}
