#include <stdio.h>
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
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n",
			       i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
