#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * *_calloc - allocates memory for an array, using malloc
  * @nmemb: number of array elements
  * @size: size of array elements
  *
  * Return: pointer to the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == '\0')
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*((char *)a + i) = 0;
	return (a);
}
