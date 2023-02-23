#include <stdio.h>
#include "main.h"

/**
 * main - frinds and print the pargest prime factor of the
 * number 6128 followed by a newlinw
 * Return 0
 */
int main(void)
{
	long int num, max, i;

	num = 612852475143;
	max = -1;

	while (num % 2 ==0)
	{
		max = 2;
		num /= 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
		max = num;

	printf("%ld\n", max);

	return (0);
}
