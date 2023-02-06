#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer that points to the struct
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
