#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 * Description: Writes a program that prints all possible
 * different combination of two digits
 * which should be seperated by commas
 * Return: Always 0
 */

int main(void)
{
	int x;
	int y;
	int z = 0;

	while (z < 10)
	{

		y = 0;
		while (y < 10)
		{

			x = 0;
			while (x < 10)
			{

				if (x != y && y != z && z < y && y < x)
				{

					putchar('0' + z);
					putchar('0' + y);
					putchar('0' + z);

					if (z + y + x != 9 + 8 + 7)
					{

						putchar(',');
						putchar(' ');
					}
				}

				x++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
		return (0);
}
