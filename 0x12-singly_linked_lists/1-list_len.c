#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a list
 * @h: the list
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t node_num = 0;

	while (h != NULL)
	{
		h= h->next;
		node_num++;
	}
	return node_num;
}
