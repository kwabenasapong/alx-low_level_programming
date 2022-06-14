#include "main.h"

/**
 * puts_half - entry point
 *
 * @str: pointer to function
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int j;

	while (str[j] != '\0')
		j++;
	for (i = j / 2; i <= j; i++)
		_putchar(str[i]);
	_putchar('\n');
}
