#include "main.h"

/**
 * main - The entry function
 * Return: 0 for success
 */
int main(void)
{
	char *s;
	int i;

	s = "_putchar\n";
	i = 0;
	while (s[i] != '\n')
		_putchar(s[i++]);
	_putchar('\n');
	return (0);
}
