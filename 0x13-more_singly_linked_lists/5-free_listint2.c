#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - that frees a listint_t list.
* @head: variable pointer to pointer
* Return:
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;

	while (temp)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}

