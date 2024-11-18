#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: index of the first element for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    i = size;
    if (i && cmp)
    {
        for (i = 0; i < size; i++)
        {
            if (cmp(array[i]))
            {
                return (i);
            }
        }
    }
    if (size <= 0)
    {
        return (-1);
    }
    return (-1);
}
