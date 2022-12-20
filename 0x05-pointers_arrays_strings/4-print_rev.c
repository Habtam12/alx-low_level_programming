#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints the argument string in reverse
 * @s: the argument string
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	char *a;

	a = s;
	i = 0;
	while (s[i] != '\0')
		i++;

	i--;
	while (i >= 0)

		_putchar(a[i--]);
	_putchar('\n');
}
