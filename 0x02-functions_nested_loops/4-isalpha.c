#include "main.h"

/**
 *_isalpha - entry point
 *Return: 1 if alphabet or 0 if not
 *@c: integer passed to function
 */
int _isalpha(int c)
{
	char alpha_low[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		if (c == alpha_low[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
