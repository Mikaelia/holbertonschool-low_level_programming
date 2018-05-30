#include "sort.h"
/**
  * bubble_sort - bubble sort algorithm
  * @array: array of ints to sort
  * @size: size of the array
  *
  */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i;
	size_t j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}
