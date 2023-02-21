#include "main.h"

/**
 * main - main program
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alphab = 'a';

	while (alphab <= 'z')
	{
		_putchar (alphab);
		alphab++;

	}
	_putchar ('\n');

}
