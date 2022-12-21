#include "main.h"

/**
 * _isdigit - checkes whether the character is digit
 * @c: the character to be checked
 * Return: 1 if it is digit or 0 if it is not
 */
int _isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}
