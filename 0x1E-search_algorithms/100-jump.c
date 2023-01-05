#include "search_algos.h"

/**
 * jump_search - Jump search algorithm implementation
 *
 * @array: parsed array
 * @size: array size
 * @value: target in array
 *
 * Return: index of value or -1 if not present or null array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_size;
	int cur_pos, beg_blk, i;

	jump_size = sqrt(size);
	cur_pos = 0;

	if (!array)
		return (-1);

	while (array[cur_pos] < value)
	{
		printf("Value checked array[%d] = [%d]\n"
				, cur_pos, array[cur_pos]);
		cur_pos += (int)jump_size;
		if (cur_pos > (int)size)
			return (-1);
	}

	beg_blk = cur_pos - (int)jump_size;

	printf("Value found between indexes [%d] and [%d]\n"
			, beg_blk, cur_pos);
	for (i = beg_blk; i <= cur_pos; i++)
	{
		printf("Value checked array[%d] = [%d]\n"
				, i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);

}
