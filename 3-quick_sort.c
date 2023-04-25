#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending
 * order using the Quick Sort algorithm
 * @array: array of integers to be sorted
 * @size: size of the array
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	qs(array, 0, size - 1, size);
}



/**
 * qs - Sorts an array of integers in ascending
 * order using the Quick Sort algorithm
 * @array: array of integers to be sorted
 * @low: lower boundary
 * @high: higher boundary
 * @size: size of the array
 *
 * Return: nothing
 */
void qs(int *array, int low, int high, size_t size)
{
	int loc;

	if (low < high)
	{
		loc = partition(array, low, high, size);
		qs(array, low, loc - 1, size);
		qs(array, loc + 1, high, size);
	}
}


/**
 * partition - partitions the array using Lomuto algorithm
 * @array: array of integers to be sorted
 * @low: first index of the array
 * @high: last index of the array
 * @size: size of the array
 *
 * Description: This function implements the Quick Sort
 * algorithm using the Lomuto partition scheme
 * Return: Index of the positioned pivot
 */
int partition(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int i, j, tmp;

	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != high)
	{
		tmp = array[i];
		array[i] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}
	return (i);
}
