#include "main.h"

#include <string.h>



/**
 * leet - encodes a string into 
 * @s: pointer for the string
 * Return: pointer for the encoded string
 */

char *leet(char *str)

{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (str[i] == c[j])
			{
				str[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
