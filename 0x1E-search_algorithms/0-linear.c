#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array using LSA
 * @array: pointer to the first element in the array
 * @size: is th number of elements in array
 * @value: the value to be searched for
 *
 * Return:  -1 if fails
 */
int linear_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			if (array[i] == value)
			{
				return (i);
			}
			printf("Value checked array[%ld] =  [%d]\n", i, array[i]);
		}
		return (-1);
	}
	return (-1);
}
