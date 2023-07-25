#include "sort.h"
/**
 * bubble_sort - sorting an array
 *
 * @array: arary to be sorted.
 * @size: soze of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int temp;
	int swp;

	if (size < 2)
		return;
	for (a = 0; a < size - 1; a++)
	{
		swp = 1;
		for (b = 0; b < size - a - 1; b++)
		{
			if (array[b]  > array[b + 1])
			{
				temp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = temp;
				swp = 0;
				print_array(array, size);
			}
		}
		if (swp == 1)
			break;
	}
}
