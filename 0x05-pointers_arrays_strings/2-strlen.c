#include "main.h"
#include <stdio.h>

/**
 * _strlen - This function return the lenght of a string
 *
 * @s: The lenght of the string to return
 */

void _strlen(char *s)
{
	int count = 0;

	for (count = 0; s[count] != '\0'; count++);
	
	return count;	
}
