#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Prints the last digit of a number
 * @n: the number
 * Return: the last digit on the number
 */
int print_last_digit(int n)
{
	n = abs(n);
	n = n % 10;
	if (n < 0)
		n = -1 * n;
	_putchar(n + '0');
	return (n);
}
