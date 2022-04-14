#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - return the index of the first valid element
 * @array: the array to search through
 * @size: size of the array
 * @cmp: compare function
 *
 * Return: index
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]))
			return (count);
	}
	return (-1);
}
