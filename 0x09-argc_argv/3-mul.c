#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - program that multiplies two numbers
  * @argc: number of arguments
  * @argv: array or arguments
  *
  * Return: If less than two arguments returns 1, otherwise returns 0
  */
int main(int argc, char **argv)
{
	int mult1;
	int mult2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	mult2 = atoi (argv[2]);
	mult1 = atoi (argv[1]);
	printf("%d\n", (mult1 * mult2));

	return (0);
}
