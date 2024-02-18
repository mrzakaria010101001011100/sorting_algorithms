#include "sort.h"
/**
 * bubble_sort sorts an array of integers  using a bubble
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, indx, tp = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (indx = 0; indx < size; indx++)
		{
			if (array[indx] > array[indx + 1] && array[indx + 1])
			{
			tp = array[indx];
			array[indx] = array[indx + 1];
			array[indx + 1] = tp;
			print_array(array, size);
			}
		}
}
