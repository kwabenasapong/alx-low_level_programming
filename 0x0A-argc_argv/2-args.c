#include <stdio.h>
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
	int i = 0;

	for (i = 0;  i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
