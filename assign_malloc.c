#include <stdlib.h>
#include <stdio.h>

/**
 * print_int_array - helper function
 * @a: pointer
 * @size: integer
 * Return: nothing
 */

void print_int_array(int *a, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d\n", a[i]);
		i++;
	}
}

/**
 * main - program
 * @ac - integer
 * @av - double pointer
 * Return: 0 always (success)
 */

int main(int ac, char **av)
{
	int *a;
	int asize;
	int i;

	if (ac < 2)
	{
		printf("Please give me at least one number\n");
		printf("Usage: %s number [NUMBER]\n", av[0]);
		return (1);
	}
	asize = ac - 1;
	a = malloc(asize * sizeof(int));
	i = 0;
	while (i < asize)
	{
		a[i] = atoi(av[i + 1]);
		i++;
	}
	print_int_array(a, asize);
	return (0);
}
