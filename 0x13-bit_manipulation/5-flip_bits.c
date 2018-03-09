#include <stdio.h>
#include "holberton.h"
/**
  * flip_bits - returns number of bits needed to flip to get to other number
  * @n: first number
  * @m: second number
  *
  * Return: number of bits needed to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int total;
	unsigned int sum;
	int i;

	sum = 0;

	total = n ^ m;
	for (i = 64; i > 0; i--)
	{
		sum += (total & 1);
		total = total >> 1;
	}
	return (sum);
}
