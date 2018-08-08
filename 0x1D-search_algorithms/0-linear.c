#include "search_algos.h"
/**
  * linear_search - searches for a value in an array using linear search
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: value to search for
  *
  * Return: first index where value is located, -1 if null array or not found
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;

	while (i <= size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return i;
		i++;
	}
		return -1;
}
