#include <stdio.h>
/**
  * checkchar - checks to see if any char in a string is a number
  * @argv: string to check
  *
  * Return: 1 if input contains symbols that are not digits, else 0
  */
int checkchar(char *argv)
{
	while (*argv != '\0')
	{
		if (*argv < '0' || *argv > '9')
		{
			printf("Error\n");
			return (1);
		}
		argv++;
	}
	return (0);
}


#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - adds positive numbers
  * @argc: argument count
  * @argv: array of arguments
  *
  * Return: If input is not a digit, returns 1, else 0
  */
int main(int argc, char **argv)
{
	int i;
	int sum;

	i = 1;
	sum = 0;

	while (argc > i)
	{
		if (!(checkchar(argv[i])))
		{
			sum += atoi(argv[i]);
			i++;
		}
		else
			return (1);
	}
		printf("%d\n", sum);
		return (0);
}
