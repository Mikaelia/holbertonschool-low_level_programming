#include <stdio.h>
#include <stdlib.h>
/**
  * array_iterator - executes functions given as parameters on array
  * @array: array to pass elements onto
  * @size: size of the array
  * @action: pointer to function to pass
  *
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
