#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints a to z
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;
	char nl;

	c = 'a';
	nl = '\n';
	while (c <= 'z')
		_putchar(c++);
	_putchar(nl);
}
