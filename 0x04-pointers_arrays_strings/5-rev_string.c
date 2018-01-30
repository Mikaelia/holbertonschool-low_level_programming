#include "holberton.h"
/**
 * rev_string - reverses a string
 *
 * Return: void
 */
void rev_string(char *s)
{

	int count;
	int i;
	int j;

	i = 0;
	count = 1;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	j = 0;

	for (i = count; i >= 0; i--)
	{
		s[j] = s[i];
		j++;
	}
}
