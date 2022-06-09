#include "main.h"

/**
 * jack_bauer - entry point
 * Return: void no return
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (l = 48; l < 51; l++)
	{
		for (k = 48; k < 58; k++)
		{
			if ((l == 50) && (k == 52))
			{
				break;
			}
			for (j = 48; j < 54; j++)
			{
				for (i = 48; i < 58; i++)
				{
					_putchar(l);
					_putchar(k);
					_putchar(':');
					_putchar(j);
					_putchar(i);
					_putchar('\n');
				}
			}
		}
	}
}
