#include "main.h"
#include <string.h>
/**
 *
 * reverse_array - reverses the content of an array of integers
 *  @a: pointer to the array
 * @n: number of elements to be reversed in the array
 *Return: void
 
 */
void reverse_array(int *a , int n)
{
	int i,d1,temp1;
	d1=n - 1;
	for (i = 0; i<n/2; i++)
	{
		temp1=a[i];
		a[i] = a[d1];
		a[d1--] = temp1;
	}
	
}
