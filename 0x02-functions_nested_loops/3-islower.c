#include "main.h"

/**
 *_islower - entry point
 *int c: the integer value the function receives
 *Return: 1 if true, 0 is false
 */
int _islower(int c)
{
	char alpha_low[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		if (c == alpha_low[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
