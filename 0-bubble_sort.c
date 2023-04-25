#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in
 * ascending order.
 * @array: array of integers
 * @size: size of the array
 *
 * Return: nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int flag;

	flag = 0;

	if (!array || size < 2)
		return;
	while (flag == 0)
	{
		flag = 1;

		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - 1 - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(array + j, array + j + 1);
					print_array(array, size);
					flag = 0;
				}
			}
		}
	}
}


/**
 * swap - swaps 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: nothing
 */
void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
