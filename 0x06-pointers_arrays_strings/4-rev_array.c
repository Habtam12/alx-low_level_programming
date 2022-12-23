#include "main.h"



/**
* reverse_array - Reverses the content of an array of integers.
*
* @a: The array of integers to be reversed.
* @n: The number of elements in the array.
*/
void reverse_array(int *a, int n)

{

		int i;
		int temp;
		i = 0;
		n = n - 1;
		while (i < n)
		{
			temp = a[i];
			a[i] = a[n];
			a[n] = temp;
			i++;
			n--;
		}
}
