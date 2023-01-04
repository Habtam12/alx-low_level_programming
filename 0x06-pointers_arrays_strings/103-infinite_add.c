#include <stdio.h>

/**
 * infinite_add - add two string numbers
 * @n1: string number to add to n2
 * @n2: string number to add to n1
 * @r: buffer to store the sum
 * @size_r: size of buffer
 * return: pointer to sum or 0 if it does not fit in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, lenS = 0;
	
	while (*(n1 + len1++))
		;
	while (*(n2 + len2++))
		;
	printf("%d, %d\n", len1, len2);
	return (r);
}
