#include "main.h"

/**
 * _strpbrk - entry point
 *
 * @s: pointer
 * @accept: pointer
 * Return: pointer or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for ( ; *s; s++)
	{
		for (i = 0; *(accept + j); i++)
		{
			if (*s == *(accept + i))
				return (s);
		}
	}
	return ('\0');
}
