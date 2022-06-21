#include "main.h"

/**
 * _strpbrk - entry point
 * @s: pointer
 * @accept: pointer
 *
 * Return: If a set is matched - a pointer to the matched byte.
 * If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; *(accept + i); i++)
			if (*s == *(accept + i))
				return (s);
		}
	}
	return ('\0');
}
