#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 * Description: The range should be from 0 to 99
 * the two numebers should be seperated by a space
 * all numbers should be prnted with two digits
 * the combination of number should be seperated by comma
 * followed by a space
 * Return: Always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{

		for (j = i; j <= 99; j++)
		{

			if (j != i)
			{

				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				putchar(' ');
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);

				if (i * 100 + j != 9899)
				{

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
