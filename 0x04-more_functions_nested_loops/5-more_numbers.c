#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int j_char_left;
	int j_char_right;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			j_char_left = j / 10;
			j_char_right = j % 10;

			if (j >= 10)
				_putchar(j_char_left + 48);
			_putchar(j_char_right + 48);
		}
		_putchar('\n');
	}
}
