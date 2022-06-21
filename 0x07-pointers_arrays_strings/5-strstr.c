#include "main.h"

/**
 * _strstr - entry point
 *
 * @haystack: pointer
 * @needle: pointer
 * Return: needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i,j;

	for (i = 0 ; *needle; i++)
	{
		for (j = 0; *(haystack + i); j++)
		{
			if (*needle == *(haystack + i))
				return (needle);
		}
}
	return ('\0');
}
