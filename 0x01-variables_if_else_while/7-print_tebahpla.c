#include <stdio.h>
#include <stdlib.h>

/**
 * main- Prints lower case in reverse.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	putchar(i);
	putchar('\n');

	return (0);
}
