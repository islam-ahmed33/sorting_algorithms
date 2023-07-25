#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, idx;
	int tmp, swp, flg = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		tmp = i;
		flg = 0;
		for (idx = i + 1; idx < size; idx++)
		{
			if (array[tmp] > array[idx])
			{
				tmp = idx;
				flg += 1;
			}
		}
		swp = array[i];
		array[i] = array[tmp];
		array[tmp] = swp;
		if (flg != 0)
			print_array(array, size);
	}
}
