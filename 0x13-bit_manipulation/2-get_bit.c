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

	if (index > (sizeof(int) * 8))
		return (-1);

	i = i << index;

	if (n & i)
		return (1);
	else
		return (0);
}
