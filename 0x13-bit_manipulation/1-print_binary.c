#include <stdio.h>
#include "holberton.h"
/**
  * print_binary - prints a number in binary
  * @n: number given
  *
  * Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;
	int flag = 0;

	for (i = i << 63; i > 0; i = i >> 1)
	{
		{
			if (n & i)
			{
				_putchar('1');
				flag = 1;
			}
			if (!(n & i) && flag)
				_putchar('0');
		}
	}
	if (!flag)
		_putchar('0');
}
