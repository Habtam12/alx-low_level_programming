#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other chars of a string, starting with the first one
 * @str: the string argument
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
