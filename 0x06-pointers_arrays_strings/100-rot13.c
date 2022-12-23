#include "main.h"



/**
 
 *rot13 - Encodes a string using rot13.
 
 * @str: The string to be encoded.

 * Return: A pointer to the encoded string.
 
 */

char *rot13(char *str)

{

		int i, j;



			char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

				char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";



					i = 0;

						while (str[i] != '\0')

								{

											j = 0;

													while (alpha[j] != '\0')

																{

																				if (str[i] == alpha[j])

																								{

																													str[i] = rot[j];

																																	break;

																																				}

																							j++;

																									}

															i++;

																}

							return (str);

}
