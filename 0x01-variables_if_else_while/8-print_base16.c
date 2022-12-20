#include <stdio.h>

/**
 * main - The entry
 * Return: 0 for success
 */
int main(void)
{
	int i;
	char nl;

	i = 0x64;
	nl = '\n';
	while (i <= 0x6)
		putchar(i++);
	putchar(nl);
	return (0);
}
