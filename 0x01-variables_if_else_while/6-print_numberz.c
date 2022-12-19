#include <stdio.h>

/**
 * main - The main function
 * Return: 0 for success
 */
int main(void)
{
	int i;
	int nl;

	i = 48;
	nl = 10;
	while (i <= 57)
		putchar(i++);
	putchar(nl);
	return (0);
}
