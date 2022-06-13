#include "main.h"

/**
 * swap_int - entry point
 *
 * @a: pointer 1
 * @b: pointer 2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
