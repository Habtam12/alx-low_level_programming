#include "main.h"

#include <stdlib.h>



/**
 
 *array_range - creates an array of integer
 * @min: the mininum integer number to be the member of the array
 
 *@max: the maximum integer number to be the member of the array
 
 *Return: pointer for the array of integers
 
 */

int *array_range(int min, int max)

{
	int *ptr;
	int i;
	int size;
	if (min > max)
		return (NULL);
	size = max - (min - 1);
	ptr = malloc(size * sizeof(int));
	if (!ptr)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min++;
	return (ptr);
}
