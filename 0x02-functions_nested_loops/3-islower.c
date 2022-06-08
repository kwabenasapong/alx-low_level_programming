#include "main.h"

/**
 *islower main - entry point
 *Return: Always void (success)
 */
int _islower(int c)
{
	char alpha_low[] = "abcdefghijklmnopqrstuvwxyz";
	int i=0;
	while(i < 26)
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
