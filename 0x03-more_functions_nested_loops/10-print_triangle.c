#include "holberton.h"
/**
  * print_triangle -  prints different sized triangles
  * @size: size of triangle
  * Return: void
  */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= size; i++)
	{
		k = 1;
		j = 1;

		while (k <= (size - i))
		{
			_putchar(' ');
			k++;
		}
		while (j <= i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
	}
}
