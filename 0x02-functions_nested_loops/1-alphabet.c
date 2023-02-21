#include "main.h"

/**
 * print_alphabet - main program
 *
 * Description: This function prints the alphabet, in lowercase,
 * foloowed by a new line.
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');
}
