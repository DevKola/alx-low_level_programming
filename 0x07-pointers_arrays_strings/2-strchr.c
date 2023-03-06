#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function locates a character in a string
 * @s: the string to copy
 * @c: the char to find
 *
 * Return: *s
 */
char *_strchr(char *s, char c)
{
	int y;

	while (1)
	{
		y = *s++;
		if (y == c)
			return (s - 1);
		if (y == 0)
			return (NULL)
	}
}
