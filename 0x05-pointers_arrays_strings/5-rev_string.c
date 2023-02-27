#include "main.h"
#include <stdio.h>

/**
 * rev_string - this function reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char tmp;
	int i, a, b;

	a = 0;
	b = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	b = a - 1;

	for (i = 0; i < a / 2; i++)
	{
		tmp = s[i];
		s[i] = s[b];
		s[b--] = tmp;`
	}

}
