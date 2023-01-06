#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checkes for a character is alphabetical or not
 * @c: the character to be checked
 * Return: 1 if the @c is alphabetic or 0 if not
 */
int _isalpha(int c)
{
	int r;

	r = isalpha(c);
	if (r == 0)
		return (0);
	else
		return (1);
}

