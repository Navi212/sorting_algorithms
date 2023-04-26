#include "sort.h"

/**
 * selection_sort - Sorts an array of integers
 * in ascending order using the Selection Sort
 * algorithm
 * @array: array of integers
 * @size: size of the array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int t;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i; j < size; j++)
		{
			if (i != j)
			{
				if (array[j] < array[min])
				{
					min = j;
				}
			}
		}
		if (min != i)
		{
			t = array[i];
			array[i] = array[min];
			array[min] = t;
			print_array(array, size);
		}
	}
}
