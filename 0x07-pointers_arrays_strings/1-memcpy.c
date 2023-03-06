#include "main.h"

/**
 * *_memcpy - function copies memory area
 * @dest: the destination of memory area
 * @src: the memory are to copy from
 * @n: the number of bytes to copy
 *
 * Return: points to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
