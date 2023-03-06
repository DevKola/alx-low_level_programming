#include "main.h"

/**
 * *_memset - This function fills memory witha constant byte
 * @s: the memory are to be filled
 * @b: the char to be copied
 * @n: tthe number of times to copy b
 *
 * Return: pointer to the memory area s
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
