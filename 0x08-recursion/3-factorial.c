#include "main.h"

/**
 * factorial - entry point
 *
 * @n: integer variable
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (n * factorial(n - 1));
}
