#include "main.h"

#include <string.h>

#include <stdio.h>



/**
 
  * cap_string - capitalizes all words of a string.
 
  * @str: pointer for the string
  * Return: pointer for the capitalized string.

  */
char *cap_string(char *str)

{

		int i;
		int j;
		char sep[] = " \t\n,;.!?\"(){}";
		printf("%lu\n", sizeof(sep));
		for (i = 0; *(str + i) != '\0'; i++)
			for (j = 0; sep[j] != '\0'; j++)

													;
		return (str);

}
