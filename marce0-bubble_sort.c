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
 * bubble_sort - bubble sorting function
 * Return: void
 * @array: int ptr
 * @size: size_t
 * Description: Bubble sorting function
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;

	if (size <= 1)
		return;

	for (i = 0; i < (size - 1); i++)
		for (j = 1; j < size; j++)
			if (array[j - 1] > array[j])
			{
				swap_int(&array[j], &array[j - 1]);
				print_array(array, size);
			}
}
