#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint - that frees a listint_t list.
* @head: variable pointer
* Return:
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
