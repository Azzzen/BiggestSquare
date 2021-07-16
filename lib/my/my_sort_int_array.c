/*
** EPITECH PROJECT, 2020
** sort int array
** File description:
** description
*/
#include "my.h"

void  my_sort_int_array(int *array, int size)
{
    int i = 0;
    int c = 0;
    int temp = 0;

    for (; i < size; i++) {
        if (array[i] > array[i+1]) {
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
            c = 1;
        }
    }
    if (c == 1)
        my_sort_int_array(array, size);
}
