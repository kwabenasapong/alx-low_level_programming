#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - entry point
 *
 * @a: pointer
 * @size: variable integer
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, n;
	int pri;
	int sec;

	n = size * size;
	for (i = 0; i < n; i += size + 1)
	{
		pri = *(a + i);
	}
	for (i = size - 1; i < n - 1; i += size - 1)
	{
		sec = *(a + i);
	}

	printf("%d, %d\n", pri, sec);
}
