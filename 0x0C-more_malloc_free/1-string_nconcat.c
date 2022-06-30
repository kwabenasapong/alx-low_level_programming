#include "main.h"
#include <stdlib.h>

/*Declarations*/
int _strlen(char *c);

/**
 * string_nconcat - entry point
 * @s1: pointer 1
 * @s2: pointer 2
 * @n: variable integer
 * Return: pointer to new memory allocation
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len1, len2;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);

	if (n >= (unsigned int) _strlen(s2))
		len2 = _strlen(s2);
	else
		len2 = n;

	cat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (cat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		cat[i] = s1[i];

	for (j = 0; j < len2; j++)
	{
		cat[i] = s2[j];
		i++;
	}
	cat[i] = '\0';
	return (cat);
}

/**
 * _strlen - entry point
 * @c: pointer
 * Return: c
 */
int _strlen(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
		;
	return (i);
}
