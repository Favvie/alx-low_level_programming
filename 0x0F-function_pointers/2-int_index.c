#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - return the index of the first valid element
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0) return (-1);
	if (cmp != NULL)
	{
		for (count = 0; count < size; count++)
		{
			if(cmp(array[count]))
				return (count);
		}
	}
	return (-1);
}
