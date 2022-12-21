#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		if (i == 50 || i == 52)
			i++;
		_putchar(i++);
	}
	_putchar('\n');
}
