#include "search_algos.h"

/**
 * linear_search - searches for a value in an array.
 *
 * @array: int array parsed.
 * @size: size_t size of array.
 * @value: int target value.
 *
 * Return: first index where value is located.
 *
 * Description: Prints a value everytime it is compared in the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
