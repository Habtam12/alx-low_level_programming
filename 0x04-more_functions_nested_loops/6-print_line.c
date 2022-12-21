#include "main.h"

/**
 * print_line - prints line with the length proportional to n
 * @n: the length of the line; one unit = one underscore ('_')
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
