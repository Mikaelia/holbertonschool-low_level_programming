#include "holberton.h"
/**
 * swap_int - Swaps the values of two integers
 *
 * Return - void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
