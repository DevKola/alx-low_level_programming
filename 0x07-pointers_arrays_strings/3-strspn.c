#include "main.h"
/**
 * _strspn - gets the lenght of a prefix substring
 * @s: the string where substring will look
 * @accept: the substring of accepted chars
 * Return: length of the occurence
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	char *a = yes;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				a++;
				break;
			}
		}
		if (!(*--accept))
			break;
		yes = a;
	}
	return (a);
}
