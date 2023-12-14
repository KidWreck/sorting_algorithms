#include "sort.h"

/**
 * bubble_sort - sorts an array using bubble sort
 * @array: array of ints
 * @size: size of array
*/
void bubble_sort(int *array, size_t size);
{
	int t;
	size_t i = 0, j;

	if (!array || !size)
		return;
	while (i < size)
	{
		for (j = 0; i < size - 1; k++)
		{
			if (array[j] > array[j + 1])
			{
				t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
				print_array(array, size);
			}
		}
		i++
	}
}
