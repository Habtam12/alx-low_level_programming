#include "main.h"



/**
 
*  reverse_array - Write a function that reverses the content of an array of
*  integers.
*  @a: This is the input array
*  @n: This is the positions have the array
*/

void reverse_array(int *a, int n)

{

		int i;

			int array[1000];



				for (i = 0; i < n; i++)

							array[i] = *(a + n - 1 - i);



					for (i = 0; i < n; i++)

								*(a + i) = array[i];
}
