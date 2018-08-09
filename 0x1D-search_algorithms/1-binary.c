#include "search_algos.h"
/**
  * printarray - prints current array segment
  * @high: upper limit of slice
  * @low: lower limit of slice
  * @array: array to print
  *
  * Return: void
  */
void printarray(int high, int low, int *array)
{

	printf("Searching in array: %d", array[low]);
	while (low < high)
	{
		printf(", %d", array[low + 1]);
		low++;
	}
	printf("\n");
}
/**
  * _binary_search - searches for a value in an array using binary search
  * @array: pointer to the first element of the array to search in
  * @low: lower limit of slice
  * @high: upper limit of slice
  * @val: value to search for
  *
  * Return: first index where value is located, -1 if null array or not found
  */
int _binary_search(int *array, int low, int high, int val)
{

	if (high >= low)
	{
		int mid = (low + high) / 2;

		printarray(high, low, array);

		if (array[mid] == val)
			return (mid);
		if (array[mid] > val)
			return (_binary_search(array, low, mid - 1, val));
		return (_binary_search(array, mid + 1, high, val));
	}
	return (-1);
}
/**
  * binary_search - searches for a value in an array using binary search
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: value to search for
  *
  * Return: first index where value is located, -1 if null array or not found
  */
int binary_search(int *array, size_t size, int value)
{
	int index;

	if (!(array))
		return (-1);
	index = _binary_search(array, 0, size - 1, value);
		if (!index)
			return (-1);
		else
			return (index);

}
