#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: int array parsed
 * @size: size_t size of array
 * @value: int target value
 * Return: index of value location or -1 if array null
 * or value not in array
 */
int binary_search(int *array, size_t size, int value)
{
	int L, R, m, i;

	L = 0;
	R = size - 1;

	if (!array)
		return (-1);

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i < R; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		m = (L + R) / 2;
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}
