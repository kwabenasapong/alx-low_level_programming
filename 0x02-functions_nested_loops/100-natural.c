#include <stdio.h>

/**
 * void print_natural - a program that computes and
 * prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 * Return: nothing
 */
void print_natural(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}	
	}

	printf("%d\n", sum);	
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_natural();
	return (0);
}
