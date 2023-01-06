#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 for success or 1 for error
 */
int main(int argc, char *argv[])
{
	int i;
	int x;
	int change;
	int y[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}

	change = 0;
	while (x > 0)
	{
		for (i = 0; i < 5; i++)
			if (x >= y[i] && x > 0)
			{
				x -= y[i];
				change++;
			}
	}
	printf("%d\n", change);
	return (0);
}
