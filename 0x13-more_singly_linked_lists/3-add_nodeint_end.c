#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* *add_nodeint_end - that adds a new node at the end of a listint_t list.
* @head: variable pointer to pointer
* @n: variable integer
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = node;
	return (*head);
}
