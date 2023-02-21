#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program 
 * 
 * Description: This function prints 10 times the
 * alphabet, in lowercase, followed bya new line.
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
