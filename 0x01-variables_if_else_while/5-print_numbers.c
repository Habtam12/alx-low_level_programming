#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 for success
 */
int main(void)
{
	char i;
	char nl;

	i = '0';
	nl = '\n';
	while (i <= '9')
		putchar(i++);
	putchar(nl);
	return (0);
}
