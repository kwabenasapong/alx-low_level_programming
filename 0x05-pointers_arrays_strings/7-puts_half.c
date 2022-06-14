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
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	j++;
	for (i = j / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
