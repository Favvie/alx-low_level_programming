#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that print a name using function pointer formatting
 * @name: name to be printed
 * @f: function pointer to be used
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
