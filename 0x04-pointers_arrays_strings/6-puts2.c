#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string
 *
 * @str: string object
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int strlen;
	int j;

	i = 0;
	strlen = 0;

	while (str[i] != '\0')
	{
		strlen++;
		i++;
	}

	j = 0;

	{
		while (j <= (strlen - 1))
		{
			_putchar((str[j]));
			j += 2;
		}
	}
	_putchar('\n');
}
