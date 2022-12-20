#include "main.h"

/**
 * print_sign - checks for the numbers whether it is +ve, -ve or 0
 * @n: the number for which the sign is checked
 * Return: 1 if n is +ve, 0 if it is 0, and -1 if it is -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
