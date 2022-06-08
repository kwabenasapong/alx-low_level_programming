#include "main.h"

/**
 *  *print_alphabet_x10 main - entry point
 *   *Return: Always void (success)
 *    */
void print_alphabet_x10(void)
{
	char alpha_low[] = "abcdefghijklmnopqrstuvwxyz";
	char j = 0;
	while (j < 10)
	{
		char i = 0;
		while (i < 26)
		{
	        	_putchar(alpha_low[i]);
			i++;
		}
		_putchar('\n');
		j++;
	}
	return;
}
