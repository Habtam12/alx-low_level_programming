#include "main.h"

#include <string.h>

#include <ctype.h>



/**
*string_toupper - changes all lower case letters of a string to uppercase.
*@str: pointer for the string
*Return: pointer for the changed letter
*/

char *string_toupper(char *str)

{

		int i;



			for (i = 0; str[i] != '\0'; i++)

						if (*(str + i) >= 'a' && *(str + i) <= 'z')

										*(str + i) -= 32;

				return (str);

}
