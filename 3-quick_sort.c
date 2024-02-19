#include "sort.h"
#include <sys/types.h>

/**
 * partition_divide - divides the array to 2.
 * @array: array to be sorted
 * @low: first index.
 * @high: last index.
 * @size: size array.
 * Return: nothing.
 */

size_t partition_divide(int *array, ssize_t low, ssize_t high, size_t size)
{
	int pivot = array[high], swaped;
	ssize_t i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swaped = array[j];
				array[j] = array[i];
				array[i] = swaped;
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[i + 1])
	{
		swaped = array[i + 1];
		array[i + 1] = array[high];
		array[high] = swaped;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quicksort - divides the array sorting.
 * @array: array to be sorted.
 * @low: first index.
 * @high: last index.
 * @size: size array.
 * Return: nothing
 */
void quicksort(int *array, ssize_t low, ssize_t high, size_t size)
{
	ssize_t pt;

	if (low < high)
	{
		pt = partition_divide(array, low, high, size);
		quicksort(array, low, pt - 1, size);
		quicksort(array, pt + 1, high, size);
	}
}

/**
 * quick_sort - divides the array sorting.
 * @array: array to be sorted.
 * @size: size array.
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}

