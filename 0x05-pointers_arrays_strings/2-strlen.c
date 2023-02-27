#include "main.h"
#include <stdio.h>

/**
 * _strlen - This function return the lenght of a string
 *
 * @s: The lenght of the string to return
 *
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int count = 0;


	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
