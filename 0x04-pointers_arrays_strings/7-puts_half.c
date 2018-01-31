#include "holberton.h"
/**
 * puts_half- prints the second half of a string
 *
 * @str: string object
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;
	int strlen;

	i = 0;
	strlen = 0;

	while (str[i] != '\0')
	{
		strlen++;
		i++;
	}

	j = 0;

	if (strlen % 2 == 0)
	{
		for (j = strlen / 2; j < strlen; j++)
			_putchar(str[j]);
	}
	else
	{
		for (j = (strlen - 1) / 2 + 1; j < strlen; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
