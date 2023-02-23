#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int num2;

	if (n < 0)
	{
		num2 = -n;
		_putchar('_');
	} else
	{
		num2 = n;
	}

	if (num2 / 10)
	{
		print_number(num2 / 10);
	}

	_putchar((num2 % 10) + '0');
}
