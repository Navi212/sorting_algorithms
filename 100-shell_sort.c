#include "sort.h"
/**
 * shell_sort - Sorts array of integers in ascending
 * order using the Shell sort algorithm
 * @array: input arrray
 * @size: size of the array
 *
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t n = 1;

	while (n < size)
		n = (n * 3) + 1;

	while ((n = (n - 1) / 3) > 0)
		s_sort(array, size, n);
}
/**
 * s_sort - Helper function for shell_sort function
 * @array: array of integers
 * @size: size of the array
 * @n: interval
 * Return: nothing
 */
void s_sort(int *array, int size, int n)
{
	int tmp, i, j;

	for (i = 0; (i + n) < size; i++)
	{
		for (j = i + n; (j - n) >= 0; j = j - n)
		{
			if (array[j] < array[j - n])
			{
				tmp = array[j];
				array[j] = array[j - n];
				array[j - n] = tmp;
			}
		}
	}
	print_array(array, size);
}
