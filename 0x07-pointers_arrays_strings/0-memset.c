#include "main.h"

/**
 * _memset - This function fiils memory with a constant byte
 * @s: pointer
 * @b: data to change
 * @n: to be filled
 *
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
