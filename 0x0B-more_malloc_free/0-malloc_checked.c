#include "holberton.h"
#include <stdlib.h>
/**
  * *malloc_checked - a function that allocates memory using malloc
  * @b: size of space to allocate
  *
  * Return: pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
