#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - that prints all the elements of a listint_t list.
 * @h: variable pointer
 * Description: write a function that prints all the elements
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
