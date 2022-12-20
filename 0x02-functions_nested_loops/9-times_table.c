#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int p;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			p = i * j;
			if (j == 0)
				printf("%d,", p);
			else if (j > 0 && j < 9)
				printf("%3d,", p);
			else
				printf("%3d\n", p);
		}
	}
}
