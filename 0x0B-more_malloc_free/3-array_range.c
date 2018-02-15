#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * *array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  *
  * Return: pointer to the allocated memory
  */
int *array_range(int min, int max)
{
	int total;
	int j, i;
	int *s;

	j = 0;

	if (min > max)
		return (NULL);

	total = max - min + 1;

	s = malloc(sizeof(int) * total);
	if (s == '\0')
		return (NULL);
	for (i = min; i <= max; i++)
	{
		s[j] = i;
		j++;
	}
	return (s);
}
