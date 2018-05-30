#include "sort.h"
/**
  * selection_sort - performs a selection sort
  * @array: array to be sorted
  * @size: size of the array
  */
void selection_sort(int *array, size_t size)
{
    int i, j;
    int new[size];
    int tmp;
	int idx_min;

    for (i = 0; i < size - 1; i++)
    {
        idx_min= i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[idx_min])
			{
            	idx_min = j;
			}
        }
        tmp = array[idx_min];
        array[idx_min] = array[i];
        array[i] = tmp;
		print_array(array, size);
    }
}
