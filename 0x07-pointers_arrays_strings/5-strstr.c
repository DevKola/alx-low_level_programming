#include "main.h"

/**
 * *_strstr - this function locates substring
 * @haystack: the pointer to the char
 * @needle: the pointer to the char
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *outcome = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (outcome);
		}
		needle = fneedle;
		outcome++;
		haystack = outcome;
	}
	return (0);
}
