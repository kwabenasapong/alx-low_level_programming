#include "main.h"

/**
 * print_diagsums - entry point
 *
 * @a: pointer
 * @size: variable integer
 * Return: nothing
 */
void print_diagsums(int *a, int size)
}
	int i, j, pri, sec;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				pri += a[i][j];
			if ((i + j) == (n - 1))
				sec += a[i][j];
		}
	}
	printf("%d, %d\n", pri, sec);
}
