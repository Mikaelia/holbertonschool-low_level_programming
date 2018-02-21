#include <stdio.h>
#include <stdlib.h>
/**
  * int_index - a function that searches for an integer
  * @array: array to pass elements onto
  * @size: num elements in array
  * @cmp: pointer to function to compare valuestrutr
  *
  * Return: void
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (NULL);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i);
	}
	return (-1);
}
