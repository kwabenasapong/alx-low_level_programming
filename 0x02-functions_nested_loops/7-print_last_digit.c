#include "main.h"

/**
 * print_last_digit - entry point
 * @i: variable to be passed
 * Return: Always i (success)
 */
int print_last_digit(int i)
{
	int lnum;

	lnum = i % 10;
	if (lnum < 0)
	{
		lnum *= -1;
	}
	_putchar(lnum + '0');
	return (lnum);
}
