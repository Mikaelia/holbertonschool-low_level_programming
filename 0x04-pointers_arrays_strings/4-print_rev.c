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
	while (*s)
	{
		s++;
	}
	while (*(s - 1))
	{
		_putchar (*(s - 1));
		s--;
	}
	_putchar('\n');
}
