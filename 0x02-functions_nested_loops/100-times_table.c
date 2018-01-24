#include "holberton.h"
/**
  * main - check the code for Holberton School students.
  *
  * Return: Always 0.
  */

void print_times_table(int n)
{
	int i;
	int k;
	int val;

	if ( n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (k = 1; k <= n; k++)
			{
				val = i * k;

				if (val >= 10 && val < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((val / 10) +'0');
					_putchar((val % 10) +'0');
				}
				if (val >= 100)
				{

					_putchar(',');
					_putchar(' ');
					_putchar((val / 100) +'0');
					_putchar(((val / 10) % 10) +'0');
					_putchar((val % 10) + '0');
				}
				if (val < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(val + '0');
				}
			}
			_putchar('\n');
		}
	}
}
