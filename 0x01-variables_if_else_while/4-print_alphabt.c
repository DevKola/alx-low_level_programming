#include <stdio.h>
#include <stdlib.h>

/**
 * main- Prints all alphabets except q an e.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');

	return (0);
}
