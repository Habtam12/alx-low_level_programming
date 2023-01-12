#include "main.h"

#include <stdlib.h>



/**
 
 * _realloc - reallocates a memory block
 
 * @ptr: pointer to the memory previously allocated
 
 * @old_size: the size of the previously allocated memory
 
 * @new_size: the size of the new to be allocated memory
 
 *Return: pointer for the reallocated memory block
 
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	char *old_ptr;
	char *nptr;
	unsigned int size;
	unsigned int i;
	if (new_size > old_size)
		size = old_size;
	else
		size = new_size;
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if(ptr)
			return (nptr);
		else
			return (NULL);
	}
	nptr = malloc(size);
	if (!nptr)
		return (NULL);
	old_ptr = ptr;
	for (i = 0; i < size; i++)
		nptr[i] = old_ptr[i];
	free(ptr);
	return (nptr);
}
