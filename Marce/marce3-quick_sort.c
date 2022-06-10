#include "sort.h"
/**
 * quick_sort - quick sorting function
 * Return: void
 * @array: int ptr
 * @size: size_t
 * Description: Quick sorting function
 */

void quick_sort(int *array, size_t size)
{
	size_t ini, fin, izq, der, med, piv = 0;

	if (size > 1)
	{
		piv = array[0];
		fin = size - 1;

		while ( izq < der)
		{
			while(der > izq && L[der] > piv)
			{
				der--;

			}
		}
	}

}
