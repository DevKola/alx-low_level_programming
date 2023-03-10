#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - this program copies string pointed to by
 * src including the terminating null byte (\0) to the
 * buffer pointed by the dest
 * @dest: pointed to the buffer in the which will copy
 * the string
 * @src: string to be copied
 *
 * Return: the pointed to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
