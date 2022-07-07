#include "function_pointers.h"

/**
 * int_index - entry point
 *
 * @array: arg 1 (pointer to array)
 * @size: arg 2 (size of array)
 * @cmp: arg 3 (pointer to array)
 *
 * Return: nothing
 */
int int_index(int *array, size_t size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
