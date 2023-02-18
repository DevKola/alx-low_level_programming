#include <stdio.h>
#include <stdlib.h>

/**
 * main - writes a program
 * Description - Prints all possible different combinations of
 * two digits. Numbers must be seperated by commas, followed
 * by  a space. The two digits muts be different.
 * Return: Always 0.
 */

int main(void)
{
	int a;
	int b = 0;

	while (b < 10)
	{
		a = 0;
		while (a < 10)
		{
			if (b != a && b < a)
			{
				putchar('0' + b);
				putchar('0' + a);

				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}


			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
