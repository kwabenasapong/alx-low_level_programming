#include "main.h"
/**
* _strcpy - entry point
*
* @dest: pointer to function
* @src: pointer to function
* Return: char dest
*/
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i;

	while (src[l] != '\0')
	{
		l++;
	}
	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
