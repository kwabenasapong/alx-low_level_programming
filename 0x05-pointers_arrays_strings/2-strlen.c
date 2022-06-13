#include "main.h"

/**
 * _strlen - entry point
 *
 * @s: pointer to function
 * Return: integer (success)
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

