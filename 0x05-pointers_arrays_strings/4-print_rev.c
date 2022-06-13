#include "main.h"

/**
 * print_rev - entry point
 *
 * @s: pointer to function
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	for (i = j; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
