#include "main.h"

/**
  *reverse_array - Write a function that reverses the content of an array of
 *integers.
 *@a: This is the input array
 *@n: This is the positions have the array
 */
void reverse_array(int *a, int n)

{
	int tmp,index;
	for (index = n-1; index >= n/2; index--)
	{
		tmp = a[n-1-index];
		a[n-1-index] = a[index];
		a[index] = tmp;
	}

}
