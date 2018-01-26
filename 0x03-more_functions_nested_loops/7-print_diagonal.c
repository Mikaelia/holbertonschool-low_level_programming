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
	{

		for (i = 0; i < n; i++)
		{
			for (s = 1; s <= i; s++)
			{
				if (s != i)
				_putchar(' ');
				else if (s == i)
				{

					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
