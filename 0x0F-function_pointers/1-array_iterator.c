#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: the array
 * @size: size of the array
 * @action: the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	 int count;

	if (array != NULL && action != NULL)
	{

		for(count = 0; (size_t)count < size; count++)
		{
			action(array[count]);
		}
	}

}
