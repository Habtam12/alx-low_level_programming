#include "main.h"


/**
 *reverse_array - reverses the content of an array of integers
 *@a: pointer to the array
 *@n: number of elements to be reversed in the array
 *Return: void
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
