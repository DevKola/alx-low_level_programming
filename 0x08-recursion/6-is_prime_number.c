#include "main.h"

int tmp_prime(int n, int i);

/**
 * divisors - if number is prime
 * @n: integer parameter
 * @m: integer parameter
 * Return: boolean
 */

int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - this is the prime
 * @n: integer parameter
 * @Return: recursion
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisor(3, n));
	}
}
