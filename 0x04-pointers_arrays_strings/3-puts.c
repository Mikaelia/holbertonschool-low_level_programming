#include "holberton.h"
/**
 * _puts - prints a string, followed by a new line
 *
 * @str: points to string
 *
 * Return: void
 */
void _puts(char *str)
{


	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
