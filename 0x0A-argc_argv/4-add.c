#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: vector arrays in program
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int k;
	unsigned int lstr, l;
	int sum = 0;
	char *spt;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (k = 1; argc; k++)
		{
			spt = argv[k];
			lstr = strlen(spt);
			for (l = 0; l < lstr; l++)
			{
				if (isdigit(*(spt + l)) == 0)
				{	
					printf("Error\n");
				return (1);
				}
			}
			sum += atoi(spt);
		}
		printf("%d\n", sum);
	}
	return (0);
}
