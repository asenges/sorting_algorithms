#include "sort.h"
/**
*swap_int - swaps values
*@a: parametrer one
*@b: parametrer two
*Return: Always 0.
*/


void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - selection sorting function
 * Return: void
 * @array: int ptr
 * @size: size_t
 * Description: Selection sorting function
 */
void selection_sort(int *array, size_t size)
{
	size_t min = 0;
	size_t i, j = 0;
	
	if (!array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min > i)
		{
			swap_int(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
