#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: the list containing the elements
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{

	size_t count = 0;

	while(h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str != NULL ? h->str : "(nil)");

		h = h->next;
		count += 1;
	}

	return count;
}
