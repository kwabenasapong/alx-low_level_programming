#include "main.h"

/**
 *  *_isalpha main - entry point
 *   *Return: Always void (success)
 *    */
int _isalpha(int c)
{
	char alpha_low[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWWXYZ";
	int i = 0;
	while (i < 52)
	{
		if (c == alpha_low[i])
		{
		        return (1);
		        break;
		}

		i++;
	}
        return(0);
}
