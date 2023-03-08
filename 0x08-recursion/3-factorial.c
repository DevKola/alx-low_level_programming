#include "main.h"

/**
 * factorial - functions return a factorial given number
 * @n: the integer parameter
 * Return: recursion
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
