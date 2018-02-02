#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array to reverse
 * @n: number of elements in the array
 *
 *
 */
void reverse_array(int *a, int n)
{
	int temp;
	int half;
	int i;

	n -= 1;
	half = (n / 2);
	i = 0;

	while (n > half)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		i++;
		n--;
	}
}
