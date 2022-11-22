#include <stdio.h>

/**
 * print_times_table - prints the nth times table
 * @n: variable nth to print
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j != n)
				printf("%d,   ", result);
			else
				printf("%d", result);
		}
		printf("\n");
	}
	/*printf("\n");*/
}
