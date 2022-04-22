#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * stringLength - returns the length of string
 *@str: string
 *
 * Return - int
 */
int stringLength(const char *str){
	int count = 0;
	while (count >= 0)
	{
		if(str[count])
			count++;
		else
			break;
	}
	return count;
}
/**
 * add_node - add a new node at the beginning of a linked list
 * @head: the list
 * @str: the new node value
 *
 * Return: address of the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = (list_t *) malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = stringLength(str);
	newNode->next = *head;

	*head = newNode;
	return (newNode);
}
