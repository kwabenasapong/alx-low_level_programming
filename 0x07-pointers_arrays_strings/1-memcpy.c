#include "main.h"

/**
 * _memcpy - entry point
 *
 * @dest: pointer
 * @src: pointer
 * @n: unsigned int variable
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, k;

	k = (int)*dest;
	for (i = k; i < (k + n); i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
