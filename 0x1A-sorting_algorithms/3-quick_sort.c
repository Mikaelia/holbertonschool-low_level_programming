#include "sort.h"
/**
  * swap - swap two values
  * @a: first value to swap
  * @b: second value to swap
  * @size: size of the array
  * @array: array to sort
  */
void swap(int *a, int *b, size_t size, int *array)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	print_array(array, size);
}
/**
  * partition - sorts values to either side of pivot
  * @hi: higher bound of sub-array
  * @lo: lower bound of sub-array
  * @size: size of the array
  * @array: array to sort
  * Return: index of partition
  */
int partition(int *array, int lo, int hi, size_t size)
{
	int i;
	int pindex = lo;
	int pivot = array[hi];

	for (i = lo; i < hi; i++)
	{
		if (array[i] < pivot)
		{
			if (pindex != i)
				swap(&array[pindex], &array[i], size, array);
			pindex += 1;
		}
	}
	if (hi != pindex)
		swap(&array[hi], &array[pindex], size, array);
	return (pindex);
}
/**
  * quicksort - quicksort function
  * @array: array to sort
  * @lo: lower bound of sub-array
  * @hi: higher bound of sub-array
  * @size: size of the array
  */
void quicksort(int *array, int lo, int hi, size_t size)
{
	int pindex;

	if (array == NULL)
		return;

	if (lo < hi)
	{
		pindex = partition(array, lo, hi, size);
		quicksort(array, lo, pindex - 1, size);
		quicksort(array, pindex + 1, hi, size);
	}
}
/**
  * quick_sort - quick sort entry point
  * @array: array to be sorted
  * @size: size of the array
  */
void quick_sort(int *array, size_t size)
{
	int hi = size - 1;
	int lo = 0;

	quicksort(array, lo, hi, size);
}
