#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - that returns the number of elements in a linked listint_t list
 * @h: variable pointer
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
