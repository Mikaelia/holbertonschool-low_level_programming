#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: points to string
 *
 * Return: void
 */
void print_rev(char *s)
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
		_putchar(s[count - 1]);
		count--;
	}
	_putchar('\n');
}
