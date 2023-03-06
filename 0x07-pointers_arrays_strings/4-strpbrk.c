#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - function searches for any set of bytes
 * @s: this points to char
 * @accept: this points to char
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
