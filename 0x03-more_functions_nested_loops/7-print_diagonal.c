#include "holberton.h"
/**
  * print_diagonal-  draws straight line in terminal
  * @n: number of times the slash is printed
  * Return: void
  */
void print_diagonal(int n)
{
	int i, s;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (s = 0; s <= i; s++)
				_putchar(' ');
			_putchar('\\');
			if (s != n)
			_putchar('\n');
		}
	_putchar('\n');
}
