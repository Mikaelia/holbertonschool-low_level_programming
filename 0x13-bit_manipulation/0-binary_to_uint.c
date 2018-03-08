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
	int i, j;
	unsigned int sum;
	unsigned int pow;
	int len;

	len = 0;
	sum = 0;
	pow = 1;
	i = 0;
	j = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '1' || b[i] == '0')
		{
			i++;
			len++;
		}
		else
			return (0);
	}
	i--;
	while (len > 1)
	{

	printf("Power before: %u\n", pow);
		pow *= 2;
		len--;

	printf("Power: %u\n", pow);
	}
	printf("Power: %u\n", pow);
	while (i > 0)
	{
		sum += ((b[j] - '0') * pow);
		pow /= 2;
		i--;
		j++;
	}
	sum += (b[j] - '0');
	return (sum);
}
