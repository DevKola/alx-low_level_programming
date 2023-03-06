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

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
