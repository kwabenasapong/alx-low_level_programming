#include "main.h"

/**
 * _memset - entry point
 *
 * @s: pointer
 * @b: char variable
 * @n: unsigned int variable
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
