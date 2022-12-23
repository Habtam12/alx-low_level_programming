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

	int i,temp;
	n=n - 1;
	while (i < n)
	{
		temp=a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
	
}
