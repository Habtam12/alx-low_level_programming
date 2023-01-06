#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - the main function
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 for success or 1 for error
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
