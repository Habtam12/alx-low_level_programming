#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: the pointer argument for the string
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int half;

	len = strlen(str);
	half = len / 2;
	if (len % 2 != 0)
	{
		while (half < len - 1)
			_putchar(str[++half]);
	}
	else
	{
		while (half < len)
			_putchar(str[half++]);
	}
	_putchar('\n');
}
