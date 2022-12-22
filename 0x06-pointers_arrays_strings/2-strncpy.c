#include "main.h"

#include <string.h>



/**
 *
 *  * _strncpy - copies a string
 *
 *   * @dest: pointer for destination string
 *
 i*    * @src: pointer for source string
 *
 *     * @n: number of bytes from the source string
 *
 *      * Return: pointer for the copied string
 *
 *       */

char *_strncpy(char *dest, char *src, int n)

{

		return (strncpy(dest, src, n));

}
