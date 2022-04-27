#include "lists.h"
/**
 * listint_len - a function that prints out the number of nodes in a list
 * @h: a pointer to the head of the linked list
 *
 * Return: number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return count;
}
