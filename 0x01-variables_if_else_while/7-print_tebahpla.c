#include <stdio.h>

/**
 * main - the entry
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	char nl;

	c = 'z';
	nl = '\n';
	while (c >= 'a')
		putchar(c--);
	putchar(nl);
	return (0);
}
