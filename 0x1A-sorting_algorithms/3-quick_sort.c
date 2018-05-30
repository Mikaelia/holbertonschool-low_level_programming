#include "sort.h"
/**
  *
  *
  *
  *
  */
void swap(int *a, int *b, size_t size, int *array)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	print_array(array, size);
}
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
 *
 *
 *
 *
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
 *
 *
 *
 *
 */
 void quick_sort(int *array, size_t size)
{
	int hi = size - 1;
	int lo = 0;
	quicksort(array, lo, hi, size);
}


