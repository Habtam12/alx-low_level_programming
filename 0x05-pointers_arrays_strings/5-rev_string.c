#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses the argument string
 * @s: the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	int len;
	char a[1000];

	j = 0;
	for (i = strlen(s) - 1; i >= 0; i--)
	{
		a[j++] = s[i];
	}
	a[j] = '\0';
	len = strlen(a);
	for (i = 0; i < len; i++)
	{
		s[i] = a[i];
	}
	s[i] = '\0';
}
