#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary stream
 *
 * Return: converted number, or zero if null or fail stream
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum;
	int pow;

	pow = 1;
	sum = 0;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		i++;
	}
	while (i)
	{
		i--;
		if (b[i] == '1' || b[i] == '0')
		{
			if (b[i] == '1')
				sum += pow;
			pow *= 2;
		}
		else
			return (0);
	}
	return (sum);
}
