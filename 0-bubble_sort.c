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
	int flag, tmp;

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
					tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
					print_array(array, size);
					flag = 0;
				}
			}
		}
	}
}
