#include "holberton.h"
/**
 * rev_string - reverses a string
 *
 * @s: string object
 *
 * Return: void
 */
void rev_string(char *s)
{

	int count;
	int temp;
	int i;
	int j;

	i = 0;
	count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	count -= 1;
	j = 0;

	while (j < count)
	{
		temp = s[j];
		s[j] = s[count];
		s[count] = temp;
		count--;
		j++;
	}
}
