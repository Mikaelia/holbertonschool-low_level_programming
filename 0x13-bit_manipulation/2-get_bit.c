#include <stdio.h>
#include "holberton.h"
/**
  * get_bit - returns the value of a bit at a given index
  * @n: number given
  * @index: index of bit you want to get
  *
  * Return: void
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned int value;

	if (index == 0 && n == 0)
		return (0);

	if (index >= n)
		return (-1);

	i = i << index;

	if (n & i)
		value = 1;
	else
		value = 0;
	return (value);
}
