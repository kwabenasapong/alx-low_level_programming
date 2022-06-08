#include "main.h"

/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (i <= 7)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
