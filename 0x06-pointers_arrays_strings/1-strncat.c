#include "main.h"

#include <string.h>

/**
 *
 *  * _strncat - concatenates two strings
 *
 *   * @dest: pointer for the destination string
 *
 *    * @src: pointer for the source string
 *
 *     * @n: number of bytes from the src string
 *
 *      * Return: pointer for the concatenated string
 *
 *       */

char *_strncat(char *dest, char *src, int n)

{

		return (strncat(dest, src, n));

}
