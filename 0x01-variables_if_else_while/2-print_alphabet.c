#include <stdio.h>

/**
 * main - Prints all alphabets in lowercase.
 *
 * return: always 0.
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
