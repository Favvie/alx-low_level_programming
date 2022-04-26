#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print all the elements of a list
 * @h: the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	/* the parameter passed in, is a pointer to the first element in the list */
	size_t count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h= h->next;
		count++;
	}
	return count;
}
