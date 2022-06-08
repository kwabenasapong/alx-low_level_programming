#include "main.h"

/**
 *print_alphabet_x10 - entry point
 *Return: Always void (success)
 */
void print_alphabet_x10(void)
{
	char alpha_low[] = "abcdefghijklmnopqrstuvwxyz";
	int j = 0;

	while (j < 10)
	{
		int i = 0;

		while (i < 26)
		{
			_putchar(alpha_low[i]);
			i++;
		}
		_putchar('\n');
		j++;
	}
}

