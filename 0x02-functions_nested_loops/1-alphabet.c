#include "main.h"

/**
 *print_alphabet - entry point
 *Return: Always void (success)
 */
void print_alphabet(void)
{
	char alpha_low[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		_putchar(alpha_low[i]);
		i++;
	}
	_putchar('\n');
}
