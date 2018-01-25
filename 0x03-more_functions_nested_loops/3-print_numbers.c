#include "holberton.h"
/**
  * print_numbers - Print numbers 0 - 9
  *
  * Return: void
  */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
