#include "sort.h"
/**
 * selection_sort - selection sorting function
 * Return: void
 * @array: int ptr
 * @size: size_t
 * Description: Selection sorting function
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_i;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_i = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_i])
				min_i = j;

		if (i < min_i)
		{
			swap(&array[min_i], &array[i]);
			print_array(array, size);
		}
	}
}
