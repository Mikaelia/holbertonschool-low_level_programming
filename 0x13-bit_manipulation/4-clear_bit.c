#include <stdio.h>
#include "holberton.h"
/**
  * clear_bit - sets bit at given index to zero
  * @n: number given
  * @index: index of bit you want to get
  *
  * Return: 1 if works, -1 if error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > sizeof(*n) * 8)
		return (-1);

	i = i << index;

	*n &= ~i;

	return (1);
}
