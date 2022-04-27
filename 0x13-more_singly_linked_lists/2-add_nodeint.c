#include "lists.h"
/**
 * add_nodeint - a function that adds a new node to the beginning of the linked list
 * @head: address of the first node in the linked list
 * @n: new node value
 *
 * Return: the pointer to the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
       	/* declare new node*/
	listint_t *new;	
	/*allocate memory for new node */

	if (new == NULL)
		return NULL;
	
	/*input values into new node*/
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
