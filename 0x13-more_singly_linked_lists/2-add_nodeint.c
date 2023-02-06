#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* *add_nodeint - that adds a new node at the beginning of a listint_t list
* @head: variable pointer to pointer
* @n: integer
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->n = n;
	*head = new_node;

	return (*head);
}
