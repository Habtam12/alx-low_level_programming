#include "main.h"

#include <stdlib.h>



/**
 
 *calloc - allocates memory for an array
 
 *@nmemb: number of members for the array
 
 *@size: the the size for each memeber
 
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *ptr;
	unsigned int i;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}
