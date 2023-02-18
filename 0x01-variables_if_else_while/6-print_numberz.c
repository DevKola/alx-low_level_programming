#include <stdio.h>
#include <stdlib.h>

/**
 * main- Prints all number of base ten.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	putchar(i + '0');

	putchar('\n');

	return (0);
}
