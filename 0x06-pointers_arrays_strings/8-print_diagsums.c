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
	int diag1, diag2;
	int i;

	diag1 = 0;
	diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[(size + 1) * i];
		diag2 += a[(size - 1) + (size - 1) * i];
	}

	printf("%d, ", diag1);
	printf("%d\n", diag2);
}

