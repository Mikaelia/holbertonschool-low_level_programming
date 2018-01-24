#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98  - print numbers from n to 98
 *@n: number to start count
 * Return: 0
 */

void print_to_98(int n)
{
	int i;
	int j;

	if (n == 98)
	{
		printf("%d\n", n);
		return;
	}
	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
	}
	for (j = n; j >= 98; j--)
	{
		printf("%d", j);
		if (j != 98)
			printf(", ");
	}
	printf("\n");
}
