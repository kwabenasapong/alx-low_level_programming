#include "main.h"

int _strlen(char *s);

/**
 * _strcat - entry point
 *
 * @dest: pointer to function
 * @src: pointer function
 * Return: dest (success)
 *
 */
char *_strcat(char *dest, char *src)
{
	int l = _strlen(dest);
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[l + n] = src[n];
	}
	dest[l + n] = '\0';
	return (dest);
}

/**
 * _strlen - entry point
 * @s: pointer to function
 * Return: c (success)
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
