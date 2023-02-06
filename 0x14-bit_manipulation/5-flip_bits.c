#include "main.h"

/**
 * flip_bits - returns number of bits you would need to flip to get from one
 * number to another
 * @n: value 1
 * @m: value 2
 *
 * Return: number of bits to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipbit;
	unsigned long int xorop;

	xorop = n ^ m;

	flipbit = 0;

	while (xorop != 0)
	{
		if ((xorop & 1) == 1)
		{
			flipbit++;
		}
		xorop = xorop >> 1;
	}
	return (flipbit);
}

