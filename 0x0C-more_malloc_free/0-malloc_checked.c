#include "main.h"

#include <stdlib.h>


void *malloc_checked(unsigned int b)

{
	void *mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
