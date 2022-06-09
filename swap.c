#include "sort.h"
/**
 * swap - helper function
 * Return: void
 * @a: int ptr
 * @b: int ptr
 * Description: Swap two elements in an array
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
