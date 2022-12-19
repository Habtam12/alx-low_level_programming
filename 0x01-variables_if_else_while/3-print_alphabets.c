#include <stdio.h>

/**
 * main - The entry function
 * Return: 0 for success
 */
int main(void)
{
	int s;
	int C;
	int nl;

	s = 'a';
	C = 'A';
	nl = '\n';
	while (s <= 'z')
	{
		putchar(s++);
	}
	while (C <= 'Z')
		putchar(C++);
	putchar(nl);
	return (0);
}
