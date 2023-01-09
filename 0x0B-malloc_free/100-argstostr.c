#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: arguments count
 * @av: arguments vector
 * Return: pointer for the concatenated str
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int col;
	int size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	for (i = 0; i < ac; i++)
		size += strlen(av[i]) + 1;
	str = malloc(size * sizeof(char));
	if (str)
	{
		for (i = 0; i < ac; i++)
		{
			col = (strlen(av[i]) + 1) * sizeof(char);
			j = 0;
			while (av[i][j] != '\0')
			{
				str[i * col + j] = av[i][j];
				j++;
			}
			str[i * col + j] = ' ';
		}
		str[i * col + j] = '\n';
		return (str);
	}
	else
		return (NULL);
}
