#include <stdlib.h>
#include <stdio.h>
/**
  * *create_array - creates an array of chars, initialize  with a specific char
  * @size: size of array
  * @c: char to initalize array with
  *
  * Return: pointer to created array
  */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(int));
	if (p == NULL || size == 0)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
