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
	else
		return (2 * _pow(n - 1));
}

/**
 * binary_to_uint - convertes a binary number to an unsigned int
 * @b: pointer to the binary numbers string
 * Return: the converted number or 0 if a char or more is not 0\1, or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int i;
	int j;
	int n_bits;
	char *b_array;

	n = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		;
	b_array = malloc(i);
	if (!b_array)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		b_array[i] = b[i];
	n_bits = i - 1;
	i = 0;
	for (j = n_bits; j >= 0; j--)
	{
		if (b_array[j] == '1')
			n += _pow(i);
		else if (b_array[j] == '0')
			n += 0;
		else
		{
			free(b_array);
			return (0);
		}
		i++;
	}
	free(b_array);
	return (n);
}
