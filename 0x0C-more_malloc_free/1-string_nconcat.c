#include "main.h"

#include <stdlib.h>

#include <string.h>



/**
 
 *string_nconcat - concatenates two strings
 
 *@s1: pointer for the first string
 
 * @s2: pointer for the second string
 
 *@n: number of char from the second string to be concatenated
 
 *Return: pointer for the concatenated string
 
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *str;
	unsigned int a;
	unsigned int b;
	unsigned int i;	
	unsigned int j;
	if (s1 == NULL)
		a = 0;
	else
		a = strlen(s1) + 1;
	if (s2 == NULL)
		b = 0;
	else
		b = strlen(s2) + 1;
	if (n > b)
		n = b;
	str = malloc(a + n);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i++] = ' ';
	for (j = 0; j < b; j++, i++)
		str[i] = s2[j];
	return (str);
}
