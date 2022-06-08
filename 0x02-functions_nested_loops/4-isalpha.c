#include "main.h"

/**
 *_isalpha - entry point
 *@c: integer value received by the function
 *Return: 1 is false, 0 is true
 */
int _isalpha(int c)
{
	char alpha_low[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWWXYZ";
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
