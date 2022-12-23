#include "main.h"


/**
*reverse_array - reverses the content of an array of integers
*@a: pointer to the array
*@n: number of elements to be reversed in the array
*Return: void
*/
void reverse_array(int *a, int n)

{
	int tmp, index;
	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}

}
