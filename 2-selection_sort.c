#include "sort.h"

/**
 * swap - swaps 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: nothing
 */
void swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}


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

	if (!array || size < 2)
		return;

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
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
