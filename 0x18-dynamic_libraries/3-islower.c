#include "main.h"
#include <ctype.h>

/**
 * _islower - checs for the "case" of the character
 *
 * @c: the character to be checked for it's "case"
 * Return: 1 for true or 0 for fasle
 */
int _islower(int c)
{
	int r;

	r = islower(c);
	if (r == 0)
		return (0);
	else
		return (1);
}
