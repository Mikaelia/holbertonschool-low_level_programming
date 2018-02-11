#include "holberton.h"
#include <stdio.h>
/**
  * main - prints all arguments that it recieves
  * @argc: number of parameters passed
  * @argv: array of arguments
  *
  * Return: 0
  */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

