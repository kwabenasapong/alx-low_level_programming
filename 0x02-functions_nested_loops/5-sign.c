#include "main.h"

/**
 * print_sign - entry point
 * @n: integer passed to function
 * Return: 1 if +, 0 if 0 and -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	if  (n == 0)
	{
		_putchar(0);
		return (0);
	}
	if  (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
