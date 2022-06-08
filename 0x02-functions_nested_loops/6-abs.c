#include "main.h"

/**
 * _abs - entry point
 * @i: integer passed to function
 * Return: Always variablename (success)
 */
int _abs(int i)
{
	if (i < 0)
	{
		i *= -1;
	}
	return (i);
}
