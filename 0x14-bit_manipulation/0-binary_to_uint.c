#include "main.h"

/* Declarations */
int _strlen(const char *str);
int nSqrt(int n, int x);
int _atoi(const char *S, int n);


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, k, l, len_b, sum;
	unsigned int result;

	len_b = _strlen(b);

	if (b == NULL)
		return (0);

	for (i = 0; i < len_b; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
	}

	j = 0;
	sum = 0;
	for (i = len_b - 1; i >= 0; i--)
	{
		k = _atoi(b[i]);
		l = k * nSqrt(j, 2);
		sum += l;
		j++;
	}
	result = (unsigned int)sum;
	return (result);
}


/**
 * _atoi - returns integer
 * @S: string to be converted
 * @n: index of pointer
 * Return: integer
 */
int _atoi(const char *S, int n)
{
	if (n < 0 || (S[n] < '0' || S[n] > '9'))
		return (0);

	return (10 * _atoi(S, n - 1) + (S[n] - '0'));
}


/**
 * nSqrt - returns square n of integer
 * @n: number of times
 * @x: integer to be squared n times
 * Return: n square of x
 */
int nSqrt(int n, int x)
{
	int mul = x;

	if (n == 0)
		return (1);
	if (n == 1)
		return (x);
	for (n; n > 1; n--)
		mul = mul * x;
	return (mul);
}


/**
 * _strlen - returns length of string
 * @str: string
 * Return: length of str
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}


