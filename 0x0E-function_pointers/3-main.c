#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
  * main - performs and prints calculations
  * @argc: argument count
  * @argv: array of arguments
  *
  * Return: 0, exit 98 if incorrect number of arguments
  */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (sizeof(argv[2]) > 2)
	{
		printf("Error\n");
		exit(98);
	}
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);


	result = (get_op_func(argv[2]))(num1, num2);

	printf("%d\n", result);
	return (0);
}
