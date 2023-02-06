#include "main.h"

/**
 * _pow - computes 2 the power of n
 * @n: the power
 * Return: the result
 */
unsigned int _pow(unsigned int n)
{
	if (n <= 0)
		return (1);
	return (2 * _pow(n - 1));
}

/**
 * bit_index - returns the index of the most significant bit
 * @n: the nember for which the index is going to be found
 * Return: the index
 */
unsigned int bit_index(unsigned long int n)
{
	unsigned int m;

	m = 0;
	if (n <= 1)
		return (0);
	while (_pow(m) <= n)
		m++;
	m--;
	return (m);
}

/**
 * _print_bits - prints the bits recursively
 * @i: the bit shift counter
 * @m: the number of bits counter
 * @n: the original decimal number
 * Return: nothing
 */
void _print_bits(int i, int m, unsigned long int n)
{
	if (m >= 0)
	{
		m--;
		i++;

		_print_bits(i, m, n);
		_putchar((1 & (n >> i)) + '0');
	}
	else
		return;
}

/**
 * print_binary - prints the binary representation of a number
 * @n: the number in base 10
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int m;
	int i;

	m = bit_index(n);
	i = -1;
	_print_bits(i, m, n);
}

