#include "sort.h"
/**
 * quick_sort - caller to quick sorting function
 * Return: void
 * @array: int ptr
 * @size: size_t
 * Description: Caller to quick sorting function
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_extended(array, 0, size - 1, size);
}
/**
 * quick_sort_extended - Quick sorting function implementation extended
 * Return: void
 * @array: int ptr
 * @low: size_t portion init
 * @high: size_t portion end
 * @size: size_t
 * Description: Recursive extended implementation of Quick sort
 */
void quick_sort_extended(int *array, long int low, long int high, size_t size)
{
	long int pivot = 0;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_sort_extended(array, low, pivot - 1, size);
		quick_sort_extended(array, pivot + 1, high, size);
	}
}
