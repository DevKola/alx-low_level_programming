#include "main.h"

/**
 * _strlen_recursion - fuction returns length of string
 * @s: this is the pointer to the string parameter
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}
