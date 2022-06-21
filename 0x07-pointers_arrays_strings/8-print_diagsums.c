#include <stdio.h>

/**
 * print_diagsums - entry point
 *
 * @a: pointer
 * @size: variable integer
 * Return: nothing
 */
void print_diagsums(int *a, int size)
}
	int i, j;
	int pri = 0;
	int sec = 0;
	int n = size * size;

	for (i = 0; i < n; i += size + 1)
	{
		pri += a[i];
	}
	for (j = size - 1; j < n - 1; j += size - 1)
	{
		sec += a[j];
	}

	printf("%d, %d\n", pri, sec);
}
