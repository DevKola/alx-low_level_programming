#include "main.h"

/**
 * _strlen_recursion - the size
 * @s: points ro string parameter
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - the palindrome
 * @s: points to the string
 * @l: the position
 * Return: boolean
 */

int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + 1))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - palidrome
 * @s: points to the string
 * Return: recursion
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
