#include "sort.h"
/**
 * partition - helper function
 * Return: long int
 * @array: int array
 * @low: long int
 * @high: long int
 * @size: size_t
 * Description: Retrieves a new portion of an array
 */
long int partition(int *array, long int low, long int high, size_t size)
{
	int pivot = array[high];
	int i = (low - 1), j = 0;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[i + 1])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}
