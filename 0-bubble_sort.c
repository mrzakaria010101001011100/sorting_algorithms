#include "sort.h"

/**
 * bubble_sort - bubble sort method by dividing.
 * @array: array sorted.
 * @size: size of array.
 * Return: Empty
 */

void bubble_sort(int *array, size_t size)
{
	int swap_p, swapped_p;
	size_t i;

	if (array == NULL || size < 2)
		return;

	while (swapped_p)
	{
		swapped_p = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swapped_p = 1;
				swap_p = array[i + 1];
				array[i + 1] = array[i];
				array[i] = swap_p;
				print_array(array, size);
			}
		}
	}
}
