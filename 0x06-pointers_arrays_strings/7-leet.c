#include "main.h"

/**
 * leet - entry point
 *
 * @s: string pointer
 * Return: nothing (success)
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char key[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	while (s[i] != '\0')
	{
		while (j < 10)
		{
			if (s[i] == key[j])
				s[i] = code[j];
			j++;
		}
		i++;
	}
	return (s);
}
