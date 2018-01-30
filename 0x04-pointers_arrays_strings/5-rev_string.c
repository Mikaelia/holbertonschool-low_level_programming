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

	i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	while (count >= 0)
	{
		s[i] = (s[count]);
		count--;
	}
}
