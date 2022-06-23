#include "main.h"

/**
 * _puts_recursion - entry point
 *
 * @s: pointer
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
