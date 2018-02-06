#include <stdio.h>
/**
  * print_diagsums - prints diagonal sums
  * @a: multi-dimensional array
  * @size: size of the arrays
  *
  * Return: void
  *
  */
void print_diagsums(int *a, int size)
{
	int i;
	int j;

	total = 0;
	i = 0;
	j = 0;

	while (i < size && j < size)
	{
		printf("%d", a[i][j]);
		i++;
		j++;
	}

}

