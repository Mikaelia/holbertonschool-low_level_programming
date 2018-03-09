#include <stdio.h>
#include "holberton.h"
/**
  * set_bit - sets value of a bit to one
  * @n: number given
  * @index: index of bit you want to get
  *
  * Return: void
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > sizeof(*n) * 8)
		return (-1);

	i = i << index;

	*n = (*n | i);

	return (1);
}
